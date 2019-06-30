/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ffoissey <ffoissey@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/08 13:27:10 by ffoissey          #+#    #+#             */
/*   Updated: 2019/06/30 08:10:37 by cempassi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdlib.h>
#include "ft_malloc.h"

char	*ft_strmap(char const *s, char (*f)(char))
{
	char	*map;
	char	*tmp;

	if (!s)
		return (NULL);
	if (!(map = (char *)malloc(ft_strlen(s) + 1)))
		return (NULL);
	tmp = map;
	while (*s)
		*tmp++ = f(*s++);
	*tmp = *s;
	return (map);
}
