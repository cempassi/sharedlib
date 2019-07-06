/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cempassi <nrechati@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/12 17:21:48 by cempassi          #+#    #+#             */
/*   Updated: 2018/12/06 16:00:30 by cempassi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# include "libft.h"
# include <stdlib.h>
# include <unistd.h>

typedef struct		s_gnl_file
{
	int				fd;
	int				state;
	char			*rest;
	char			*cur;
}					t_gnl_file;

int					get_next_line(const int fd, char **line);

#endif
