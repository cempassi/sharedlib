/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vct_len.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skuppers <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/05 09:37:10 by skuppers          #+#    #+#             */
/*   Updated: 2019/06/08 14:50:46 by skuppers         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "vector.h"

/*
** Return then length of the vector
** Equivalent to strlen(vector->buffer)
*/

int64_t				bit64_location(const char *cp, const char *str,
				uint8_t is64bit)
{
	if (cp[0] == 0)
		return (cp - str);
	if (cp[1] == 0)
		return (cp - str + 1);
	if (cp[2] == 0)
		return (cp - str + 2);
	if (cp[3] == 0)
		return (cp - str + 3);
	if (is64bit)
	{
		if (cp[4] == 0)
			return (cp - str + 4);
		if (cp[5] == 0)
			return (cp - str + 5);
		if (cp[6] == 0)
			return (cp - str + 6);
		if (cp[7] == 0)
			return (cp - str + 7);
	}
	return (-1);
}

uint64_t				locate_eol(t_magic *magic,
								const unsigned long int *lw_ptr,
								const char *str)
{
	int64_t		length;
	const char	*cp;

	length = 0;
	while (1)
	{
		magic->lw = *lw_ptr++;
		if (((magic->lw - magic->lo) & ~magic->lw & magic->hi) != 0)
		{
			cp = (const char *)(lw_ptr - 1);
			length = bit64_location(cp, str, (sizeof(magic->lw) > 4) ? 1 : 0);
			if (length != -1)
				return (length);
		}
	}
	return (0);
}

void				prepare_masks(t_magic *magic)
{
	magic->hi = 0x80808080;
	magic->lo = 0x01010101;
	if (sizeof(magic->lw) > 4)
	{
		magic->hi = ((magic->hi << 16) << 16) | magic->hi;
		magic->lo = ((magic->lo << 16) << 16) | magic->lo;
	}
}

uint64_t            vct_len(t_vector *vector)
{
	t_magic						magic;
	const char					*str;
	const char					*char_ptr;
	const unsigned long int 	*longword_ptr;

	ft_memset(&magic, 0, sizeof(t_magic));
	magic.lw = 0;
	str = vct_get_string(vector);
	char_ptr = str;
	while (((unsigned long int) char_ptr & (sizeof(magic.lw) - 1)) != 0)
	{
		++char_ptr;
		if (*char_ptr == '\0')
			return (char_ptr - str);
	}
	prepare_masks(&magic);
	longword_ptr = (unsigned long int *) char_ptr;
	return (locate_eol(&magic, longword_ptr, char_ptr));
}
