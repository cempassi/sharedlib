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

uint8_t		ft_ptr_ascii(unsigned char *s, size_t size)
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
	s[i] = '\0';
	return (1);
}

void		ft_print_stack_functions(char **stack, size_t size)
{
	size_t		i;
	char		*tmp;
	char		*end;

	if (size == 1)
		return ;
	dprintf(2, "--> \033[32m|Stack state at the time of allocation|\033[0m\n");
	dprintf(2, "    ---------------------------------------\n");
	i = 1;
	while (i < size && i < 20)
	{
		if ((tmp = ft_strstr(stack[i], "0x")) != NULL)
			tmp = ft_strchr(tmp, ' ');
		if (tmp != NULL)
		{
			if ((end = ft_strchr(++tmp, ' ')) != NULL)
				*end = '\0';
			dprintf(2, "    (%02zu): %s\n", i - 1, tmp);
		}
		else
			dprintf(2, "    (%02zu): %s\n", i - 1, stack[i]);
		if (ft_strstr(stack[i], " main") != NULL)
			break ;
		i++;
	}
	ft_dprintf(2, "\n");
}

void		ft_print_memory_debug(t_meminfo *meminfo)
{	
	dprintf(2, "\033[31m\nMemory leak at address %p:\n\033[0m", meminfo->addr);
	dprintf(2, "--> \033[36mTime\t : %s\033[0m", meminfo->time);
	dprintf(2, "--> \033[36mSize\t : %zu byte%s\033[0m", meminfo->size,
					meminfo->size == 1 ? "\n" : "s\n");
	if (ft_ptr_ascii((unsigned char *)meminfo->addr, meminfo->size) == 1)
	{
		dprintf(2, "--> \033[33mContent Type : Probably a string\n\033[0m");
		dprintf(2, "--> \033[33mContent\t : '%s'\n\033[0m",
			(char *)meminfo->addr);
	}
	else
		dprintf(2, "--> \033[33mContent Type : Probably not a string\n\033[0m");
	dprintf(2, "--> \033[32mFrom function: %s\033[0m\n", meminfo->function);
	dprintf(2, "--> \033[32mFrom file\t : %s\033[0m\n", meminfo->file);
	dprintf(2, "--> \033[32mAt line\t : %d\033[0m\n", meminfo->line);
	dprintf(2, "\033[0m");
	ft_print_stack_functions(meminfo->stack_fct, meminfo->stack_size);
}

void		ft_process_flush(t_list *lst, uint8_t opt, int *leaks)
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
		}
		del_meminfo(&lst);
	}
}

void		*ft_get_head_list_allocation(uint8_t opt)
{
	static t_list	*head = NULL;
	int				leaks;

	leaks = 0;
	(void)opt;
	if (head == NULL)
	{
		head = malloc(sizeof(t_list));
		head->data = NULL;
	}
	#ifdef GC
	if (opt & FLUSH_MEMORY)
	{
		ft_process_flush(head->data, opt, &leaks);
		free(head);
		head = NULL;
		if ((opt & PRINT) && leaks == 0)
			dprintf(2, "\033[32m   ### No memory leak found ! ###\n\n\033[0m");
		else if (opt & PRINT)
			dprintf(2, "\033[31m   ### %d leak(s) found ! ###\n\n\033[0m",
					leaks);
	}
	#endif
	return (head);
}
