/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vct_ncpy.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skuppers <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/05 09:39:44 by skuppers          #+#    #+#             */
/*   Updated: 2019/07/04 13:27:25 by skuppers         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "vector.h"

/*
**	Copies `len` character from the `source` vector to the `dest` vector.
**	Resizes accordingly.
*/

int8_t	vct_ncpy(t_vector *dest, t_vector *source,
						uint64_t len)
{
	vct_scpy(dest, source->buffer, len);
	return (0);
}
