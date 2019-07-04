/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vct_del_char.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skuppers <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/04 12:24:06 by skuppers          #+#    #+#             */
/*   Updated: 2019/07/04 13:08:20 by skuppers         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "vector.h"

int8_t	vct_del_char(t_vector *vector, uint64_t index)
{
	if (index > vct_len(vector))
		return (-1);
	shift_left(vector, index);
	return (0);
}
