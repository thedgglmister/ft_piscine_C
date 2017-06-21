/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse_queue.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: biremong <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/13 00:57:39 by biremong          #+#    #+#             */
/*   Updated: 2016/11/13 10:47:31 by biremong         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "eval_expr.h"

int		parse_queue(t_node *list_top)
{
	t_node		*current_node;
	t_node		*pp_node;
	int			result;

	pp_node = list_top;
	while (pp_node->next)
	{
		current_node = pp_node->next->next;
		while (current_node->type != 'c')
		{
			pp_node = pp_node->next;
			current_node = current_node->next;
		}
		result = do_math(pp_node->num, pp_node->next->num, current_node->op);
		pp_node->num = result;
		ft_remove_next_node(pp_node);
		ft_remove_next_node(pp_node);
		pp_node = list_top;
	}
	return (pp_node->num);
}

int		do_math(int n, int m, char op)
{
	if (op == '+')
		return (n + m);
	else if (op == '-')
		return (n - m);
	else if (op == '*')
		return (n * m);
	else if (op == '/')
		return (n / m);
	else
		return (n % m);
}
