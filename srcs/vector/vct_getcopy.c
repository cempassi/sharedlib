/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vct_getcopy.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skuppers <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/05 09:31:27 by skuppers          #+#    #+#             */
/*   Updated: 2019/07/03 17:01:39 by cempassi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "vector.h"

/*
** Returns an allocated copy of the internal buffer of the specified vector.
** or NULL on error.
*/

char	   *vct_getcopy(t_vector *vector)
{
   return (ft_strsub(vector->buffer, 0, vct_len(vector)));
}
