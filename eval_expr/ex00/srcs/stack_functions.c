/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_functions.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: biremong <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/13 10:43:15 by biremong          #+#    #+#             */
/*   Updated: 2016/11/13 10:44:53 by biremong         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "eval_expr.h"

void	ft_push_num(t_node **list_top, int num)
{
	t_node *new_node;

	new_node = (t_node *)malloc(sizeof(t_node));
	new_node->type = 'i';
	new_node->num = num;
	new_node->next = *list_top;
	*list_top = new_node;
}

void	ft_push_op(t_node **list_top, char op)
{
	t_node *new_node;

	new_node = (t_node *)malloc(sizeof(t_node));
	new_node->type = 'c';
	new_node->op = op;
	new_node->next = *list_top;
	*list_top = new_node;
}

char	ft_pop_op(t_node **list_top)
{
	int		op;
	t_node	*temp;

	op = (*list_top)->op;
	temp = *list_top;
	*list_top = (*list_top)->next;
	free(temp);
	return (op);
}

void	ft_reverse_list(t_node **list_top)
{
	t_node	*list_pointer;
	t_node	*pre_temp;
	t_node	*post_temp;

	list_pointer = *list_top;
	pre_temp = 0;
	while (list_pointer)
	{
		post_temp = list_pointer->next;
		list_pointer->next = pre_temp;
		pre_temp = list_pointer;
		list_pointer = post_temp;
	}
	*list_top = pre_temp;
}

void	ft_remove_next_node(t_node *node)
{
	t_node *temp;

	if (node->next == 0)
		return ;
	temp = node->next;
	node->next = temp->next;
	free(temp);
}
