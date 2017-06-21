/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   list_functions.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: biremong <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/13 21:26:38 by biremong          #+#    #+#             */
/*   Updated: 2016/11/13 21:27:06 by biremong         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush.h"

t_node	*create_node(char c)
{
	t_node *new_node;

	new_node = (t_node *)malloc(sizeof(t_node));
	new_node->data = c;
	new_node->next = NULL;
	return (new_node);
}

void	push_node(t_node **begin_list, char c)
{
	t_node *current_node;
	t_node *new_node;

	new_node = create_node(c);
	current_node = *begin_list;
	if (current_node == NULL)
	{
		*begin_list = new_node;
	}
	else
	{
		while (current_node->next)
		{
			current_node = current_node->next;
		}
		current_node->next = new_node;
	}
	return ;
}
