/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vct_dup.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nrechati <nrechati@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/05 09:28:39 by nrechati          #+#    #+#             */
/*   Updated: 2019/07/04 13:21:15 by nrechati         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "vector.h"

/*
**	Duplicates a vector and returns a pointer to the freshly allocated
**	structure.
*/

t_vector	*vct_dup(t_vector *vect)
{
	return (vct_dups(vct_get_string(vect)));
}
