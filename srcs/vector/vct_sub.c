/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vct_sub.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skuppers <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/05 10:27:25 by skuppers          #+#    #+#             */
/*   Updated: 2019/06/05 10:27:26 by skuppers         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "vector.h"

char       *vct_sub(t_vector *vector, uint64_t start, uint64_t len)
{
   return (ft_strsub(vector->buffer, start, len));
}
