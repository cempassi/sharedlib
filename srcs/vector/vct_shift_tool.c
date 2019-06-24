/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vct_shift_tool.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skuppers <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/05 10:27:33 by skuppers          #+#    #+#             */
/*   Updated: 2019/06/24 16:25:26 by ffoissey         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "vector.h"

void shift_nright(t_vector *vector, uint64_t start, uint32_t offset)
{
    int64_t    vlen;

    vlen = vct_len(vector);
    while (vlen >= (int64_t)start)
    {
        vector->buffer[vlen + offset] = vector->buffer[vlen];
        --vlen;
    }
}

void shift_nleft(t_vector *vector, uint64_t start, uint32_t offset)
{
    uint64_t    vlen;

    vlen = vct_len(vector);
	if (vlen > offset)
		vlen -= offset;
    while (start <= vlen)
    {
        vector->buffer[start] = vector->buffer[start + offset];
        ++start;
    }
}

void shift_right(t_vector *vector, uint64_t start)
{
    shift_nright(vector, start, 1);
}

void shift_left(t_vector *vector, uint64_t start)
{
    shift_nleft(vector, start, 1);
}
