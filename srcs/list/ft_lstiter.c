/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ffoissey <ffoissey@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/12 13:53:07 by ffoissey          #+#    #+#             */
/*   Updated: 2019/05/04 18:53:13 by ffoissey         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_lstiter(t_list *lst, void (*f)(void *data))
{
	if (lst)
	{
		f(lst->data);
		ft_lstiter(lst->next, f);
	}
}
