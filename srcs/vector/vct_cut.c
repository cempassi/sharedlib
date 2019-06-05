/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vct_cut.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skuppers <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/18 11:18:40 by skuppers          #+#    #+#             */
/*   Updated: 2019/06/05 09:25:07 by skuppers         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "vector.h"

/*
**	Deletes the first character of the specified vector,
**	And shifts the rest of the buffer one character to the left.
**	Always returns 0
*/

int8_t             vct_cut(t_vector *vector)
{
    shift_left(vector, 0);
    return (0);
}
