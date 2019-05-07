/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ffoissey <ffoissey@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/15 13:36:58 by ffoissey          #+#    #+#             */
/*   Updated: 2018/11/09 19:48:42 by ffoissey         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_malloc.h"

void	ft_memdel(void **ap)
{
	if (!ap || !*ap)
		return ;
	ft_free(*ap);
	*ap = NULL;
	return ;
}
