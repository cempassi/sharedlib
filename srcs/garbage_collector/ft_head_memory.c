/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_head_memory.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nrechati <nrechati@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/07 15:54:59 by nrechati          #+#    #+#             */
/*   Updated: 2019/05/07 15:57:55 by nrechati         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_malloc.h"

static void		ft_process_flush(t_list *lst)
{
	if (lst)
	{
		ft_process_flush(lst->next);
		free(lst->data);
		lst->data = NULL;
		free(lst);
		lst = NULL;
	}
}

void			*ft_get_head_list_allocation(int flush)
{
	static t_list	*head = NULL;

	if (head == NULL)
	{
		head = malloc(sizeof(t_list));
		head->data = NULL;
	}
	if (flush == FLUSH_MEMORY)
	{
		ft_process_flush(head->data);
		free(head);
		head = NULL;
	}
	return (head);
}
