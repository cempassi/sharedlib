/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_free.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skuppers <skuppers@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/07 15:58:16 by skuppers          #+#    #+#             */
/*   Updated: 2019/05/07 15:58:17 by skuppers         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_malloc.h"

void	del_meminfo(t_list **lst)
{
	t_meminfo *meminfo;

	meminfo = (t_meminfo *)((*lst)->data);
	free(meminfo->addr);
	free(meminfo->stack_fct);
	free(meminfo);
	free(*lst);
	*lst = NULL;
}

static void	ft_process_free(t_list **lst, void *ptr)
{
	t_list	*run;
	t_list	*tmp;

	run = *lst;
	tmp = *lst;
	while (run != NULL)
	{
		if (run && (run->data) && ((t_meminfo *)((run)->data))->addr == ptr)
		{
			if (run == *lst)
				*lst = (*lst)->next;
			else
				tmp->next = run->next;
			del_meminfo(&run);
			return ;
		}
		tmp = run;
		run = run->next;
	}
}

void		ft_free(void *ptr)
{
	t_list		*lst;
	t_list		*head;

	head = ft_get_head_list_allocation(GET_HEAD);
	lst = head->data;
	if (lst == NULL || ptr == NULL)
		return ;
	else
		ft_process_free(&lst, ptr);
	head->data = lst;
}
