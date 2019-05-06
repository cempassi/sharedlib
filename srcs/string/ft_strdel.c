/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cempassi <cempassi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/08 12:00:13 by cempassi          #+#    #+#             */
/*   Updated: 2019/01/17 13:51:31 by cempassi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_malloc.h"

void	ft_strdel(char **as)
{
	if (!as || *as == NULL)
		return ;
	ft_free(*as);
	*as = NULL;
	return ;
}
