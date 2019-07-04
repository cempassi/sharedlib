/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vct_scat.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skuppers <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/05 09:38:38 by skuppers          #+#    #+#             */
/*   Updated: 2019/07/03 17:01:44 by cempassi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "vector.h"

/*
**	Concatenates `len` characters from the string `source`, to the vector `dest`.
**	Resizes automaticaly.
*/

int8_t		 vct_scat(t_vector *dest, char *source,
						uint64_t len)
{
	if (dest->size < (vct_len(dest) + len))
		vct_resize(dest, (vct_len(dest) + len) + 1);
	ft_strncat(dest->buffer, source, len);
	return (0);
}
