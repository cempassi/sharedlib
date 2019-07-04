/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vct_pop.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skuppers <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/05 09:41:34 by skuppers          #+#    #+#             */
/*   Updated: 2019/07/04 13:23:34 by skuppers         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "vector.h"

/*
**	Deletes the last character of the specified vector.
*/

int8_t	vct_pop(t_vector *vector)
{
	if (vct_len(vector) == 0)
		return (0);
	vector->buffer[vct_len(vector) - 1] = '\0';
	return (0);
}
