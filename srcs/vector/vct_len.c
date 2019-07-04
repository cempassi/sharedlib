/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vct_len.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skuppers <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/04 13:19:35 by skuppers          #+#    #+#             */
/*   Updated: 2019/07/04 13:19:42 by skuppers         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "vector.h"

/*
** Return then length of the vector
** Equivalent to strlen(vector->buffer)
*/

uint64_t			vct_len(t_vector *vector)
{
	return (ft_strlen(vct_get_string(vector)));
}
