/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   find_square.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: biremong <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/15 12:36:49 by biremong          #+#    #+#             */
/*   Updated: 2016/11/16 17:34:42 by sescolas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bsq.h"

void	scan_number_map(t_sqinfo *sqinfo, t_glob globals, int ***number_map)
{
	int i;
	int j;

	i = 0;
	while (i < globals.rows && (globals.rows - i) >= sqinfo->max)
	{
		j = 0;
		while (j < globals.cols && (globals.cols - j) >= sqinfo->max)
		{
			if ((*number_map)[i][j] > sqinfo->max)
			{
				if (square_check(i, j, sqinfo->max, number_map))
				{
					sqinfo->max = (*number_map)[i][j];
					sqinfo->x = j;
					sqinfo->y = i;
				}
			}
			j++;
		}
		i++;
	}
}

int		square_check(int i, int j, int max, int ***number_map)
{
	int row_counter;
	int orig_i;

	orig_i = i;
	row_counter = (*number_map)[i][j];
	if ((*number_map)[i][j] <= max)
		return (0);
	while (row_counter)
	{
		if (!(*number_map)[i] || (*number_map)[i][j] < (*number_map)[orig_i][j])
		{
			if (!(*number_map)[i])
				(*number_map)[orig_i][j] -= row_counter;
			else
				(*number_map)[orig_i][j] = ft_max(((*number_map)[i][j]),\
						(*number_map)[orig_i][j] - row_counter);
			return (square_check(orig_i, j, max, number_map));
		}
		i++;
		row_counter--;
	}
	return ((*number_map)[orig_i][j]);
}

int		ft_max(int a, int b)
{
	return (a > b ? a : b);
}
