/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ffoissey <ffoissey@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/19 16:13:53 by ffoissey          #+#    #+#             */
/*   Updated: 2019/01/17 14:41:17 by ffoissey         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

char	*ft_strcpy(char *dst, const char *src)
{
	char *d;

	if (!src)
		return (dst);
	d = dst;
	while (*src)
		*d++ = *src++;
	*d = '\0';
	return (dst);
}
