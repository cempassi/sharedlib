/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsplit_if.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cempassi <cempassi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/28 07:17:47 by cempassi          #+#    #+#             */
/*   Updated: 2019/06/06 16:29:25 by cempassi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static t_list		*spliter(t_list *current, t_list **new,\
							void *data, t_cmp cmp)
{
	t_list		*old;
	t_list		*tmp;

	old = NULL;
	while (current)
	{
		tmp = current;
		current = current->next;
		tmp->next = NULL;
		if (cmp(tmp->data, data))
			ft_lstaddback(new, tmp);
		else
			ft_lstaddback(&old, tmp);
	}
	return (old);
}

t_list			*ft_lstsplit_if(t_list **lst, void *data, t_cmp cmp)
{
	t_list		*new;
	t_list		*holder;

	if (!lst || !*lst || !cmp)
		return (NULL);
	new = NULL;
	while ((*lst) && cmp((*lst)->data, data))
	{
		holder = (*lst);
		*lst = (*lst)->next;
		holder->next = NULL;
		ft_lstaddback(&new, holder);
	}
	if ((*lst)->next)
		(*lst)->next = spliter((*lst)->next, &new, data, cmp);
	return (new);
}
