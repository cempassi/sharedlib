/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vct_getstring.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skuppers <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/05 09:32:21 by skuppers          #+#    #+#             */
/*   Updated: 2019/07/03 17:01:39 by cempassi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "vector.h"

/*
** Returns the pointer to the actual internal buffer of the specified vector.
*/

char	   *vct_get_string(t_vector *vector)
{
   return (vector->buffer);
}
