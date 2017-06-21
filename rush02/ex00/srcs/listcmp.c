/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   listcmp.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: biremong <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/13 16:02:59 by biremong          #+#    #+#             */
/*   Updated: 2016/11/13 21:30:29 by biremong         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush.h"

int		listcmp(t_node *begin_list1, t_node *begin_list2)
{
	t_node *curr_node1;
	t_node *curr_node2;

	curr_node1 = begin_list1;
	curr_node2 = begin_list2;
	if (curr_node1 != NULL && curr_node2 == NULL)
		return (0);
	while (curr_node1 != NULL && curr_node1->data == curr_node2->data)
	{
		curr_node1 = curr_node1->next;
		curr_node2 = curr_node2->next;
	}
	if (curr_node1 == NULL && curr_node2 == NULL)
		return (1);
	else
		return (0);
}
