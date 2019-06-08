/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vct_charat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skuppers <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/18 11:20:51 by skuppers          #+#    #+#             */
/*   Updated: 2019/06/06 15:59:46 by skuppers         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "vector.h"

/*
**	Returns the character at the index `index` of the specified vector.
**	Or 0 if index is bigger than the buffer length.
*/

char	vct_charat(t_vector *vct, uint64_t index)
{
//	if (index > vct_len(vct))
//		return (0);
	return (vct->buffer[index]);
}
