/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vct_del.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skuppers <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/18 11:18:43 by skuppers          #+#    #+#             */
/*   Updated: 2019/06/05 09:26:12 by skuppers         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "vector.h"

/*
**	Deletes a vector and its internal buffer
*/

void        vct_del(t_vector **vector)
{
    if (vector == NULL || *vector == NULL)
        return ;
    ft_strdel(&(*vector)->buffer);
    ft_free(*vector);
    *vector = NULL;
}
