/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vct_del_string.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skuppers <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/18 11:18:44 by skuppers          #+#    #+#             */
/*   Updated: 2019/05/18 11:18:45 by skuppers         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "vector.h"

int8_t       vct_del_string(t_vector *vector,
                    uint64_t start, uint64_t len)
{
    shift_nleft(vector, start, len);
    return (0);
}
