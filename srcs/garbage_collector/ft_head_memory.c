/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_head_memory.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skuppers <skuppers@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/07 15:54:59 by skuppers          #+#    #+#             */
/*   Updated: 2019/05/07 15:57:55 by skuppers         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_malloc.h"
#include <stdio.h>

static uint8_t		ft_ptr_ascii(unsigned char *s, size_t size)
{
	size_t	i;

	i = 0;
	if (s == NULL)
		return (0);
	while (i < (size - 1))
	{
		if ((s[i] > 126 || s[i] < 32) && s[i] != '\t' && s[i] != '\n'
				&& s[i] != '\0')
			return (0);
		i++;
	}
	if (s[i] != '\0')
		return (0);
	return (1);
}

static void		ft_print_stack_functions(char **stack, size_t size)
{
	size_t		i;
	char		*tmp;
	char		*end;

	if (size == 1)
		return ;
	printf("--> \033[32m|Stack state at the time of allocation|\033[0m\n");
	printf("    ---------------------------------------\n");
	i = 1;
	while (i < size && i < 20)
	{
		if ((tmp = ft_strstr(stack[i], "0x")) != NULL)
			tmp = ft_strchr(tmp, ' ');
		if (tmp != NULL)
		{
			if ((end = ft_strchr(++tmp, ' ')) != NULL)
				*end = '\0';
			printf("    (%02zu): %s\n", i - 1, tmp);
		}
		else
			printf("    (%02zu): %s\n", i - 1, stack[i]);
		if (ft_strstr(stack[i], " main") != NULL)
			break ;
		i++;
	}
	ft_printf("\n");
}

static void		ft_print_memory_debug(t_meminfo *meminfo)
{	
	printf("\033[31m\nMemory leak at address %p:\n\033[0m", meminfo->addr);
	printf("--> \033[36mTime\t : %s\033[0m", meminfo->time);
	printf("--> \033[36mSize\t : %zu byte%s\033[0m", meminfo->size,
					meminfo->size == 1 ? "\n" : "s\n");
	if (ft_ptr_ascii((unsigned char *)meminfo->addr, meminfo->size) == 1)
	{
		printf("--> \033[33mContent Type : Probably a string\n\033[0m");
		printf("--> \033[33mContent\t : '%s'\n\033[0m", (char *)meminfo->addr);
	}
	else
		printf("--> \033[33mContent Type : Probably not a string\n\033[0m");
	printf("--> \033[32mFrom function: %s\033[0m\n", meminfo->function);
	printf("--> \033[32mFrom file\t : %s\033[0m\n", meminfo->file);
	printf("--> \033[32mAt line\t : %d\033[0m\n", meminfo->line);
	printf("\033[0m");
	ft_print_stack_functions(meminfo->stack_fct, meminfo->stack_size);
}

static void		ft_process_flush(t_list *lst, uint8_t opt, int *leaks)
{
	if (lst)
	{
		ft_process_flush(lst->next, opt, leaks);
		if (lst->data != NULL)
		{
			if (opt & PRINT)
			{
				(*leaks)++;
				ft_print_memory_debug((t_meminfo *)(lst->data));
			}
			free(((t_meminfo *)(lst->data))->addr);
			free(((t_meminfo *)(lst->data))->stack_fct);
			free(lst->data);
		}
		lst->data = NULL;
		free(lst);
		lst = NULL;
	}
}

void			*ft_get_head_list_allocation(uint8_t opt)
{
	static t_list	*head = NULL;
	int				leaks;

	leaks = 0;
	if (head == NULL)
	{
		head = malloc(sizeof(t_list));
		head->data = NULL;
	}
	if (opt & FLUSH_MEMORY)
	{
		ft_process_flush(head->data, opt, &leaks);
		free(head);
		head = NULL;
		if ((opt & PRINT) && leaks == 0)
			ft_putendl_fd("\033[32mThere is no memory leak\033[0m", 2);
	}
	return (head);
}
