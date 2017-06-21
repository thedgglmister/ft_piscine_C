/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_map.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sescolas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/15 17:11:19 by sescolas          #+#    #+#             */
/*   Updated: 2016/11/16 14:11:24 by sescolas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bsq.h"

void	print_map(char **map_array, t_glob globals, t_sqinfo sqinfo)
{
	int i;
	int j;

	i = 0;
	while (i < globals.rows)
	{
		j = 0;
		while (j < globals.cols)
		{
			if ((j >= sqinfo.x && j < (sqinfo.x + sqinfo.max)) &&
					(i >= sqinfo.y && i < (sqinfo.y + sqinfo.max)))
				ft_putchar(globals.full);
			else
				ft_putchar(map_array[i][j]);
			j++;
		}
		ft_putchar('\n');
		i++;
	}
	clear_array(map_array);
}

void	clear_array(char **map_array)
{
	int i;

	i = 0;
	while (map_array[i])
		free(map_array[i++]);
	free(map_array);
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}
