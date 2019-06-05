/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vct_ncat.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skuppers <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/05 09:37:37 by skuppers          #+#    #+#             */
/*   Updated: 2019/06/05 09:38:35 by skuppers         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "vector.h"

/*
**	Concatenates `len` characters from the source vector to the dest vector.
**	Resizes automatically.
*/

int8_t         vct_ncat(t_vector *dest, t_vector *source,
                        uint64_t len)
{
    vct_scat(dest, source->buffer, len);
    return (0);
}
