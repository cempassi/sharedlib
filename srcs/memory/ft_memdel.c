/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ffoissey <ffoissey@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/15 13:36:58 by ffoissey          #+#    #+#             */
/*   Updated: 2019/06/30 06:26:40 by cempassi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_malloc.h"

void	ft_memdel(void **ap)
{
	if (!ap || !*ap)
		return ;
	free(*ap);
	*ap = NULL;
	return ;
}
