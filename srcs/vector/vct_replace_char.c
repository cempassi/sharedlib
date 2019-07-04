/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vct_replace_char.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skuppers <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/05 09:45:05 by skuppers          #+#    #+#             */
/*   Updated: 2019/07/03 17:01:43 by cempassi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "vector.h"

/*
**	Replaces the character at the specified index from the speficied vector,
**	with the character `c`.
**	Returns 0 on success or -1 if index is bigger than the vector length.
*/

int8_t	   vct_replace_char(t_vector *vector, char c, uint64_t index)
{
	if (index > vct_len(vector))
		return (-1);
	vector->buffer[index] = c;
	return (0);
}
