/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stckpush.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ffoissey <ffoissey@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/17 21:18:11 by ffoissey          #+#    #+#             */
/*   Updated: 2019/02/18 23:09:12 by ffoissey         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_stckpush(t_stack *stack, void *data, size_t size)
{
	t_list	*node;

	if (!stack || !size)
		return (-1);
	if (!(node = ft_lstnew(data, size)))
		return (-1);
	ft_lstadd(&stack->head, node);
	stack->size += 1;
	return (0);
}
