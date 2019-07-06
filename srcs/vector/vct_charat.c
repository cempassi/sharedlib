/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vct_charat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nrechati <nrechati@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/18 11:20:51 by nrechati          #+#    #+#             */
/*   Updated: 2019/07/04 12:07:55 by nrechati         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "vector.h"

/*
**	Returns the character at the index `index` of the specified vector.
**	Or 0 if index is bigger than the buffer length.
*/

char	vct_charat(t_vector *vct, uint64_t index)
{
	return (vct->buffer[index]);
}
