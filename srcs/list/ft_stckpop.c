/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stckpop.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cempassi <cempassi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/25 17:57:29 by cempassi          #+#    #+#             */
/*   Updated: 2019/02/25 06:21:07 by cempassi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"
#include "ft_printf.h"
#include "ft_malloc.h"

void	*ft_stckpop(t_stack *stack)
{
	t_list		*holder;
	void		*data;

	if (!stack->head)
		return (NULL);
	holder = stack->head;
	stack->head = stack->head->next;
	data = holder->data;
	ft_free(holder);
	stack->size--;
	return (data);
}
