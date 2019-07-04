/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vct_insert_char.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skuppers <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/04 13:19:52 by skuppers          #+#    #+#             */
/*   Updated: 2019/07/04 13:27:03 by skuppers         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "vector.h"
#include "libft.h"

/*
** Inserts the single character `c`  into the specified vector,
** at the index `index`.
** Return 0 on succes or -1 if the index
** is bigger than the length of the vector.
*/

int8_t	vct_insert_char(t_vector *vector, char c, uint64_t index)
{
	uint64_t	v_len;

	v_len = vct_len(vector);
	if (index > v_len)
		return (-1);
	if (v_len + 1 >= vector->size)
		vct_scale(vector);
	shift_right(vector, index);
	vector->buffer[index] = c;
	return (0);
}
