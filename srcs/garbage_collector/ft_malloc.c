/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_malloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skuppers <skuppers@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/07 15:54:45 by skuppers          #+#    #+#             */
/*   Updated: 2019/05/07 15:54:46 by skuppers         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_malloc.h"
#include <time.h>
#include <execinfo.h>

static t_list	*ft_lstnew_malloc(void const *data, size_t data_size)
{
	t_list		*new;

	if (!(new = (t_list *)malloc(sizeof(t_list))))
		return (NULL);
	if (!data)
	{
		new->data = NULL;
		new->data_size = 0;
		new->next = NULL;
		return (new);
	}
	if (!(new->data = malloc(data_size)))
	{
		ft_free(new);
		return (NULL);
	}
	new->data_size = data_size;
	ft_memcpy(new->data, data, data_size);
	new->next = NULL;
	return (new);
}

void				*ft_malloc_up(size_t size, const char *function,
						const char *file, const int line)
{
	t_list				*head;
	t_list				*lst_ptr;
	t_meminfo			meminfo;
	void				*array[20];
	time_t				tm;

	if (size == 0)
		return (NULL);
	head = ft_get_head_list_allocation(GET_HEAD);
	lst_ptr = head->data;
	tm = time(NULL);
	meminfo.addr = malloc(size);
	meminfo.size = size;
	meminfo.function = function;
	meminfo.file = file;
	meminfo.line = line;
	meminfo.stack_size = backtrace(array, 20);
	meminfo.stack_fct = backtrace_symbols(array, meminfo.stack_size);
	ft_bzero(&meminfo.time, 23);
	strftime(meminfo.time, 23, "Allocated at %X\n", localtime(&tm));
	ft_lstadd(&lst_ptr, ft_lstnew_malloc(&meminfo, sizeof(meminfo)));
	head->data = lst_ptr;
	return (meminfo.addr);
}
