/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stckpopnode.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skuppers <skuppers@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/25 17:57:29 by ffoissey          #+#    #+#             */
/*   Updated: 2019/06/05 15:29:20 by cempassi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"
#include "ft_printf.h"
#include "ft_malloc.h"

t_list	*ft_stckpopnode(t_stack *stack)
{
	t_list		*holder;

	if (!stack->head)
		return (NULL);
	holder = stack->head;
	stack->head = stack->head->next;
	holder->next = NULL;
	return (holder);
}
