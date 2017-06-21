/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   process_list.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sescolas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/14 14:39:03 by sescolas          #+#    #+#             */
/*   Updated: 2016/11/16 19:30:17 by biremong         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bsq.h"

int		process_globals(t_node **list, t_glob *globals)
{
	t_node	*node;
	int		length;
	int		count;

	length = list_length(*list);
	if (!is_numeric(*list, length - 3) || length < 4)
		return (0);
	globals->rows = ft_atoi(*list, length - 3);
	count = 0;
	node = *list;
	while (count < (length - 3))
	{
		node = node->next;
		count++;
	}
	globals->empty = node->data;
	globals->obstacle = node->next->data;
	globals->full = node->next->next->data;
	if (globals->empty == globals->obstacle ||
			globals->obstacle == globals->full ||
			globals->full == globals->empty)
		return (0);
	clear_list(list);
	return (1);
}
