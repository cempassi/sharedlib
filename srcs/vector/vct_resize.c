/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vct_resize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nrechati <nrechati@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/04 13:14:36 by nrechati          #+#    #+#             */
/*   Updated: 2019/07/04 13:14:58 by nrechati         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "vector.h"

int8_t	vct_resize(t_vector *vector, uint64_t new_size)
{
	char *new;

	if (new_size == 0 || new_size < vct_len(vector))
		return (-2);
	if ((new = ft_strnew(new_size)) == NULL)
		return (-1);
	vector->size = new_size;
	ft_strncpy(new, vector->buffer, vct_len(vector));
	ft_strdel(&vector->buffer);
	vector->buffer = new;
	return (0);
}
