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

static t_meminfo	set_meminfo(size_t size)
{
	t_meminfo			meminfo;
	time_t				tm;

	tm = time(NULL);
	meminfo.addr = malloc(size);
	meminfo.size = size;
	ft_bzero(&meminfo.time, 23);
	strftime(meminfo.time, 23, "Allocated at %X\n", localtime(&tm));
	return (meminfo);
}

#include <stdio.h>

void				*ft_malloc(size_t size)
{
	t_list				*head;
	t_list				*lst_ptr;
	t_meminfo			meminfo;

	if (size == 0)
		return (NULL);
	head = ft_get_head_list_allocation(GET_HEAD);
	lst_ptr = head->data;
	meminfo = set_meminfo(size);
	ft_lstadd(&lst_ptr, ft_lstnew_malloc(&meminfo, sizeof(meminfo)));
	head->data = lst_ptr;
	return (meminfo.addr);
}
