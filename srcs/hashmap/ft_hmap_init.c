/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hmap_init.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nrechati <nrechati@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/26 12:01:39 by nrechati          #+#    #+#             */
/*   Updated: 2019/03/27 11:58:15 by nrechati         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "hashmap.h"

t_hash	ft_init_hashmap(size_t size)
{
	t_hash data;

	data.used = 0;
	data.map_size = size;
	data.map = ft_memalloc(data.map_size * sizeof(t_list *));
	return (data);
}
