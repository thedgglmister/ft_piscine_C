/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush_chars.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jinfeld <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/13 16:17:50 by jinfeld           #+#    #+#             */
/*   Updated: 2016/11/13 18:12:27 by biremong         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush.h"

int		rush_chars(int x, char *chars, t_node **begin_list)
{
	int i;

	i = 0;
	while (i < x)
	{
		if (x > 1)
		{
			if (i == 0)
				push_node(begin_list, chars[0]);
			if (i < (x - 1) && i != 0)
				push_node(begin_list, chars[1]);
			if (i == (x - 1))
			{
				push_node(begin_list, chars[2]);
				push_node(begin_list, '\n');
			}
		}
		else
		{
			push_node(begin_list, chars[0]);
			push_node(begin_list, '\n');
		}
		i++;
	}
	return (0);
}
