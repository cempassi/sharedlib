/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vct_push.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skuppers <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/05 09:42:39 by skuppers          #+#    #+#             */
/*   Updated: 2019/07/04 13:28:52 by skuppers         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "vector.h"

/*
**	Adds the character `c` to the beginning of the vector(at the index 0).
**	Return 0 on success or -1 on allocation error.
**
**	As with all vector functions, if the LENGTH of the new buffer is bigger
**	than the buffers SIZE, an equivalent reallocation occurs.
*/

int8_t	vct_push(t_vector *vector, char c)
{
	if (vct_len(vector) + 1 >= vector->size)
		if (vct_scale(vector) == -1)
			return (-1);
	shift_right(vector, 0);
	vector->buffer[0] = c;
	return (0);
}
