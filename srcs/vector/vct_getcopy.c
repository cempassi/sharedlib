/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vct_getcopy.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nrechati <nrechati@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/05 09:31:27 by nrechati          #+#    #+#             */
/*   Updated: 2019/07/04 13:20:35 by nrechati         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "vector.h"

/*
** Returns an allocated copy of the internal buffer of the specified vector.
** or NULL on error.
*/

char	*vct_getcopy(t_vector *vector)
{
	return (ft_strsub(vector->buffer, 0, vct_len(vector)));
}
