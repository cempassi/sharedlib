/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vct_sub.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skuppers <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/04 12:13:04 by skuppers          #+#    #+#             */
/*   Updated: 2019/07/04 12:14:20 by skuppers         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "vector.h"

char	*vct_sub(t_vector *vector, uint64_t start, uint64_t len)
{
	return (ft_strsub(vector->buffer, start, len));
}
