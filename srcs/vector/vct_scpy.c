/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vct_scpy.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skuppers <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/05 09:41:23 by skuppers          #+#    #+#             */
/*   Updated: 2019/06/05 10:27:16 by skuppers         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "vector.h"

/*
**	Copies `len` characters from the `source` string to the `dest` vector.
*/
int8_t         vct_scpy(t_vector *dest, char *source,
                        uint64_t len)
{
    if (dest->size < len)
        vct_resize(dest, len + 1);
    ft_strncpy(dest->buffer, source, len);
    return (0);
}
