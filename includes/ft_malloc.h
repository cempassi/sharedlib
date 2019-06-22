/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_malloc.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skuppers <skuppers@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/07 15:54:20 by skuppers          #+#    #+#             */
/*   Updated: 2019/05/07 15:54:21 by skuppers         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_MALLOC_H
# define FT_MALLOC_H

# include "libft.h"
# define GET_HEAD		0x01
# define FLUSH_MEMORY	0x02
# define PRINT			0x04
# define SILENCE		0x08

typedef	struct s_meminfo
{
	void	*addr;
	size_t	size;
	char	time[23];
}				t_meminfo;

void	*ft_malloc(size_t size);
void	ft_free(void *ptr);
void	ft_flush_memory(uint8_t opt);
void	*ft_get_head_list_allocation(uint8_t opt);

#endif
