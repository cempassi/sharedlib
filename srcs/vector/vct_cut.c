/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vct_cut.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skuppers <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/18 11:18:40 by skuppers          #+#    #+#             */
/*   Updated: 2019/07/03 17:01:37 by cempassi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "vector.h"

/*
**	Deletes the first character of the specified vector,
**	And shifts the rest of the buffer one character to the left.
**	Always returns 0
*/

int8_t			 vct_cut(t_vector *vector)
{
	shift_left(vector, 0);
	return (0);
}
