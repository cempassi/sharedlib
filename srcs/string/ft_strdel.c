/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ffoissey <ffoissey@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/08 12:00:13 by ffoissey          #+#    #+#             */
/*   Updated: 2019/01/17 13:51:31 by ffoissey         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_malloc.h"

void	ft_strdel(char **as)
{
	if (!as || *as == NULL)
		return ;
	ft_free(*as);
	*as = NULL;
	return ;
}
