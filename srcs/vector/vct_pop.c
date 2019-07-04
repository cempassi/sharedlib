/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vct_pop.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skuppers <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/05 09:41:34 by skuppers          #+#    #+#             */
/*   Updated: 2019/07/03 17:01:41 by cempassi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "vector.h"

/*
**	Deletes the last character of the specified vector.
*/

int8_t			 vct_pop(t_vector *vector)
{
  if (vct_len(vector) == 0)
	return (0);
  vector->buffer[vct_len(vector) - 1] = '\0';
  return (0);
}
