/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vct_del.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skuppers <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/18 11:18:43 by skuppers          #+#    #+#             */
/*   Updated: 2019/05/18 11:18:47 by skuppers         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "vector.h"

void        vct_del(t_vector **vector)
{
    if (vector == NULL || *vector == NULL)
        return ;
    ft_strdel(&(*vector)->buffer);
    free(*vector);
    *vector = NULL;
}
