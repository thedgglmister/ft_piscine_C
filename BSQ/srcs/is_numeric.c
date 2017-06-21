/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_numeric.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: biremong <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/14 15:43:11 by biremong          #+#    #+#             */
/*   Updated: 2016/11/16 11:05:32 by biremong         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bsq.h"

int		is_numeric(t_node *begin_list, int n)
{
	t_node *current_node;

	current_node = begin_list;
	while (n)
	{
		if (current_node->data < '0' || current_node->data > '9')
		{
			return (0);
		}
		n--;
	}
	return (1);
}
