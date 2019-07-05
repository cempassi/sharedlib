/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vct_del.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skuppers <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/18 11:18:43 by skuppers          #+#    #+#             */
/*   Updated: 2019/07/04 12:08:29 by skuppers         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "vector.h"

/*
**	Deletes a vector and its internal buffer
*/

void		vct_del(t_vector **vector)
{
	if (vector == NULL || *vector == NULL)
		return ;
	ft_strdel(&(*vector)->buffer);
	free(*vector);
	*vector = NULL;
}
