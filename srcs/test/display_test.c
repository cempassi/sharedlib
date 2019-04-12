/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   display_test.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cempassi <cempassi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/10 15:13:08 by cempassi          #+#    #+#             */
/*   Updated: 2019/04/10 16:04:03 by cempassi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	print_test_header(void)
{
	ft_printf("\n  -------------------TEST RESULTS-------------------\n");
}

void	print_test_separator(void)
{
	ft_printf("  --------------------------------------------------\n");
}

void	generate_summary(t_list **summary, t_result result)
{
	t_list		*node;

	node = ft_lstnew(&result, sizeof(t_result));
	ft_lstaddback(summary, node);
}

void	print_test_summary(t_list *summary)
{
	t_result *result;

	result = summary->data;
	ft_printf("%s >> OK : %d | KO : %d"
			, result->name, result->success, result->failure);
}
