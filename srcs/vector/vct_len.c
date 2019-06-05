/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vct_len.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skuppers <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/05 09:37:10 by skuppers          #+#    #+#             */
/*   Updated: 2019/06/05 09:37:33 by skuppers         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "vector.h"

/*
** Return then length of the vector
** Equivalent to strlen(vector->buffer)
*/

uint64_t            vct_len(t_vector *vector)
{
    return (ft_strlen(vector->buffer));
}
