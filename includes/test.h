/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cempassi <cempassi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/02 13:27:55 by cempassi          #+#    #+#             */
/*   Updated: 2019/04/11 17:54:03 by cempassi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBUNIT_H
# define LIBUNIT_H
# include "libft.h"
# define RED "124"
# define GREEN "76"
# define YELLOW "226"
# define BLUE "39"
# define ISTRUE 0
# define ISFALSE -1



typedef struct	s_test
{
	char	*name;
	int		(*test)(void);
}				t_test;

typedef struct	s_result
{
	char		*name;
	int			success;
	int			failure;
	int			segv;
	int			segbus;
	int			sigabort;
	int			sigkill;
	int			sigfpe;
}				t_result;

t_result	test_results;

t_result	run_test(t_stack *tests, char *name, int print_on);
int			load_test(t_stack *tests, char *name, int (*f)(void));
void		print_test_header(void);
void		print_test_separator(int print_on);
void		set_test(t_list **lst, t_result results);
void		print_test_result(t_list *node);
#endif
