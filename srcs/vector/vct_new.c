/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vct_new.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nrechati <nrechati@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/04 13:15:04 by nrechati          #+#    #+#             */
/*   Updated: 2019/07/04 13:31:35 by nrechati         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "vector.h"

/*
**	Allocates a new vector structure of size `size` and a default scale.
**	If size is 0, a default size value is used (16/32 bytes)
**	It returns a pointer to the newly allocated structure on success,
**	or NULL on malloc error.
*/

static void	set_vct(t_vector *new, char *buffer)
{
	new->buffer = buffer;
	new->scale = DEFAULT_VECTOR_SCALE;
}

t_vector	*vct_new(uint64_t size)
{
	t_vector	*new;
	char		*buffer;

	if (!(new = malloc(sizeof(t_vector))))
		return (NULL);
	if (size > 0)
	{
		if (!(buffer = ft_strnew(size)))
		{
			free(new);
			return (NULL);
		}
		new->size = size;
	}
	else
	{
		if (!(buffer = ft_strnew(DEFAULT_VECTOR_SIZE)))
		{
			free(new);
			return (NULL);
		}
		new->size = DEFAULT_VECTOR_SIZE;
	}
	set_vct(new, buffer);
	return (new);
}
