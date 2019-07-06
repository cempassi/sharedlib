/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vct_replace_char.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nrechati <nrechati@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/04 13:15:44 by nrechati          #+#    #+#             */
/*   Updated: 2019/07/04 13:25:26 by nrechati         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "vector.h"

/*
**	Replaces the character at the specified index from the speficied vector,
**	with the character `c`.
**	Returns 0 on success or -1 if index is bigger than the vector length.
*/

int8_t	vct_replace_char(t_vector *vector, char c, uint64_t index)
{
	if (index > vct_len(vector))
		return (-1);
	vector->buffer[index] = c;
	return (0);
}
