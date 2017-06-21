/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   list_functions.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: biremong <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/13 21:26:38 by biremong          #+#    #+#             */
/*   Updated: 2016/11/16 13:52:26 by sescolas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bsq.h"

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
		*begin_list = new_node;
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

int		list_length(t_node *begin_list)
{
	int		count;
	t_node	*current_node;

	count = 0;
	current_node = begin_list;
	while (current_node)
	{
		count++;
		current_node = current_node->next;
	}
	return (count);
}

void	copy_list_to_array(t_node *begin_list, char *array)
{
	t_node *current_node;

	current_node = begin_list;
	while (current_node)
	{
		*array = current_node->data;
		current_node = current_node->next;
		array++;
	}
	*array = '\0';
	return ;
}

void	clear_list(t_node **begin_list)
{
	t_node	*temp_pntr;

	while (*begin_list)
	{
		temp_pntr = *begin_list;
		free(*begin_list);
		*begin_list = temp_pntr->next;
	}
	return ;
}
