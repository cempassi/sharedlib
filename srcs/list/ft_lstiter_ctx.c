/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter_ctx.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nrechati <nrechati@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/07 10:59:10 by nrechati          #+#    #+#             */
/*   Updated: 2019/06/07 11:00:58 by nrechati         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstiter_ctx(t_list *lst, void *context
				, void (*f)(void *context, void *data))
{
	if (lst)
	{
		f(context, lst->data);
		ft_lstiter_ctx(lst->next, context, f);
	}
}
