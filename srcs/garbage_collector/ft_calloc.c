/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nrechati <nrechati@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/07 15:54:39 by nrechati          #+#    #+#             */
/*   Updated: 2019/05/07 15:54:40 by nrechati         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_malloc.h"

void	*ft_calloc(size_t size)
{
	void	*ptr;

	ptr = ft_malloc(size);
	ft_bzero(ptr, size);
	return (ptr);
}
