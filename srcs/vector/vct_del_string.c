/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vct_del_string.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skuppers <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/18 11:18:44 by skuppers          #+#    #+#             */
/*   Updated: 2019/07/03 17:01:38 by cempassi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "vector.h"

/*
**	Deletes a one or more character in the specified vector.
**	Starting from index start to start+len.
**	It also shifts the rest of the buffer accordingly.
**	Always returns 0.
*/

int8_t	   vct_del_string(t_vector *vector,
					uint64_t start, uint64_t len)
{
	shift_nleft(vector, start, len);
	return (0);
}
