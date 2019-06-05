/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vct_delchar.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skuppers <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/05 09:27:51 by skuppers          #+#    #+#             */
/*   Updated: 2019/06/05 09:28:36 by skuppers         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "vector.h"

/*
**	Deletes the character at the specified index of the vector.
**	Returns 0 on success or -1 if the index is bigger then the vector length.
*/

int8_t       vct_del_char(t_vector *vector, uint64_t index)
{
    if (index > vct_len(vector))
        return (-1);
    shift_left(vector, index);
    return (0);
}
