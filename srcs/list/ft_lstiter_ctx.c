/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter_ctx.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nrechati <nrechati@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/07 10:59:10 by nrechati          #+#    #+#             */
/*   Updated: 2019/06/25 08:54:04 by nrechati         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_lstiter_ctx(t_list *lst, void *context
				, int (*f)(void *context, void *data))
{
	int		ret;

	ret = 0;
	if (lst)
	{
		ret = f(context, lst->data);
		ft_lstiter_ctx(lst->next, context, f);
	}
	return (ret);
}
