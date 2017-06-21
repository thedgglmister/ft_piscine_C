/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   number_map_functions.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sescolas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/14 23:38:33 by sescolas          #+#    #+#             */
/*   Updated: 2016/11/16 17:34:25 by sescolas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bsq.h"

int		**create_number_map(t_glob globals, char **map_array)
{
	int	**number_map;
	int i;

	i = 0;
	number_map = malloc(sizeof(int *) * (globals.rows + 1));
	while (i < globals.rows)
		number_map[i++] = malloc(sizeof(int) * (globals.cols));
	populate_number_map(&number_map, map_array, globals);
	return (number_map);
}

void	populate_number_map(int ***number_map, char **map_array, t_glob globals)
{
	int i;
	int j;
	int right_space;

	i = 0;
	while (i < globals.rows)
	{
		j = 0;
		while (j < globals.cols)
		{
			right_space = scan(map_array, i, j, globals.obstacle);
			while (right_space >= 0)
				(*number_map)[i][j++] = right_space--;
		}
		i++;
	}
	(*number_map)[i] = 0;
}

int		scan(char **map_array, int i, int j, char obstacle)
{
	int right_space;

	right_space = 0;
	while (map_array[i][j] && map_array[i][j] != obstacle)
	{
		right_space++;
		j++;
	}
	return (right_space);
}
