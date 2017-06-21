/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   shunting_yard.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: biremong <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/13 10:38:35 by biremong          #+#    #+#             */
/*   Updated: 2016/11/13 11:16:43 by biremong         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "eval_expr.h"

void	ft_shunting_yard(char *expr, t_node **stack_top, t_node **queue_start)
{
	int		i;

	i = 0;
	while (expr[i])
	{
		ft_skip_ws(expr, &i);
		if (ft_is_number(expr, i))
			ft_push_num(queue_start, ft_get_number(expr, &i));
		else if (ft_is_operator(expr[i]))
		{
			while (*stack_top && ft_less_precedence(expr[i], (*stack_top)->op))
				ft_push_op(queue_start, ft_pop_op(stack_top));
			ft_push_op(stack_top, expr[i]);
		}
		else if (expr[i] == '(')
			ft_push_op(stack_top, '(');
		else if (expr[i] == ')')
			ft_parentheses_clear(stack_top, queue_start);
		i++;
	}
	while (*stack_top)
		ft_push_op(queue_start, ft_pop_op(stack_top));
	ft_reverse_list(queue_start);
}

void	ft_parentheses_clear(t_node **stack_top, t_node **queue_start)
{
	while ((*stack_top)->op != '(')
		ft_push_op(queue_start, ft_pop_op(stack_top));
	ft_pop_op(stack_top);
}

int		ft_less_precedence(char c1, char c2)
{
	if (c2 == '(')
		return (0);
	if ((c1 == '*' || c1 == '/' || c1 == '%') && (c2 == '+' || c2 == '-'))
		return (0);
	else
		return (1);
}

int		ft_get_number(char *expr, int *i)
{
	int		is_neg;
	int		result;

	is_neg = 0;
	result = 0;
	if (expr[*i] == '-')
	{
		is_neg = 1;
		(*i)++;
	}
	while (expr[*i] >= '0' && expr[*i] <= '9')
	{
		result *= 10;
		result += expr[*i] - '0';
		(*i)++;
	}
	(*i)--;
	if (is_neg)
		result *= -1;
	return (result);
}

void	ft_skip_ws(char *expr, int *i)
{
	while (expr[*i] == ' ' || expr[*i] == '\t' || expr[*i] == '\n'
			|| expr[*i] == '\r' || expr[*i] == '\v' || expr[*i] == '\f')
	{
		(*i)++;
	}
	if (expr[*i] == '\0')
		(*i)--;
}
