/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vct_del.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skuppers <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/18 11:18:43 by skuppers          #+#    #+#             */
/*   Updated: 2019/07/03 17:01:38 by cempassi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "vector.h"

/*
**	Deletes a vector and its internal buffer
*/

void		vct_del(t_vector **vector)
{
	if (vector == NULL)
		return ;
	ft_strdel(&(*vector)->buffer);
	free(*vector);
	*vector = NULL;
}
