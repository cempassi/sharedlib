/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vct_ncat.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nrechati <nrechati@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/05 09:37:37 by nrechati          #+#    #+#             */
/*   Updated: 2019/07/04 13:24:29 by nrechati         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "vector.h"

/*
**	Concatenates `len` characters from the source vector to the dest vector.
**	Resizes automatically.
*/

int8_t		vct_ncat(t_vector *dest, t_vector *source,
						uint64_t len)
{
	vct_scat(dest, source->buffer, len);
	return (0);
}
