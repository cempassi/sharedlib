/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vct_add.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skuppers <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/18 11:18:41 by skuppers          #+#    #+#             */
/*   Updated: 2019/05/18 11:18:50 by skuppers         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "vector.h"

int8_t             vct_add(t_vector *vector, char c)
{
    uint64_t len;

    len = vct_len(vector);
    if (len + 1 >= vector->size)
        vct_scale(vector);
    vector->buffer[len] = c;
    vector->buffer[len + 1] = '\0';
    return (0);
}
