/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cempassi <cempassi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/12 14:04:04 by cempassi          #+#    #+#             */
/*   Updated: 2019/06/06 16:34:34 by cempassi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		mapper(t_list *lst, t_list **map, t_lstmod func, t_del del)
{
	t_list	*node;

	node = NULL;
	if (!lst)
		return (0);
	if (func)
	{
		if ((node = func(lst->data)) == NULL)
		{
			ft_lstdel(map, del);
			return (-1);
		}
	}
	ft_lstaddback(map, node);
	return (mapper(lst->next, map, func, del));
}

t_list	*ft_lstmap(t_list *lst, t_lstmod func, t_del del)
{
	t_list	*map;

	map = NULL;
	return (mapper(lst, &map, func, del) ? NULL : map);
}
