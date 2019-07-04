/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   xvct_sub.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skuppers <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/04 13:09:51 by skuppers          #+#    #+#             */
/*   Updated: 2019/07/04 13:10:02 by skuppers         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "vector.h"

char	*vct_sub(t_vector *vector, uint64_t start, uint64_t len)
{
	return (ft_strsub(vector->buffer, start, len));
}
