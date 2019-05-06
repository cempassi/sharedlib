/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelfirst.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cempassi <cempassi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/06 20:52:50 by cempassi          #+#    #+#             */
/*   Updated: 2019/05/06 20:56:32 by cempassi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "list.h"

int		ft_lstdelfirst(t_list **alst, void (*del)(void *))
{
	t_list		*holder;

	if (!alst || !*alst)
		return (-1);
	holder = (*alst)->next;
	ft_lstdelone(alst, del);
	return (0);
}
