/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vct_add.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skuppers <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/18 11:18:41 by skuppers          #+#    #+#             */
/*   Updated: 2019/07/03 17:00:25 by cempassi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "vector.h"

/*
**  Appends the character c at the end of the specified vector.
**  Returns 0 on succes or -1 on allocation error.
**
**  As with all vector functions, if the LENGTH of the new buffer is bigger than
**  then buffers SIZE, an equivalent reallocation occurs.
*/

int8_t			 vct_add(t_vector *vector, char c)
{
	uint64_t len;

	len = vct_len(vector);
	if (len + 1 >= vector->size)
		if (vct_scale(vector) == -1)
			return (-1);
	vector->buffer[len] = c;
	vector->buffer[len + 1] = '\0';
	return (0);
}
