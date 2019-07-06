/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strendswith.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nrechati <nrechati@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/17 12:45:40 by nrechati          #+#    #+#             */
/*   Updated: 2018/09/15 14:31:00 by nrechati         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strendswith(char *string, char *suffix)
{
	char	*ptr;
	size_t	diff;
	size_t	suffix_len;
	size_t	string_len;

	if (!string || !suffix)
		return (-1);
	ptr = string;
	suffix_len = ft_strlen(suffix);
	string_len = ft_strlen(string);
	diff = string_len - suffix_len;
	ptr += diff;
	return (ft_strnequ(ptr, suffix, suffix_len));
}
