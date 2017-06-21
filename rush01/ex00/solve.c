/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   solve.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: biremong <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/05 20:08:57 by biremong          #+#    #+#             */
/*   Updated: 2016/11/06 19:53:36 by sgardner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "sudoku.h"

int		solve(char **grid, char min, char max, int n)
{
	int		row;
	int		col;
	char	nb;

	row = 0;
	col = 0;
	if (find_next_space(grid, &row, &col) == 0)
		return (1);
	else
	{
		nb = min;
		while (nb * n <= max * n)
		{
			if (is_safe(grid, row, col, nb))
			{
				grid[row][col] = nb;
				if (solve(grid, min, max, n))
					return (1);
				else
					grid[row][col] = '.';
			}
			nb += n;
		}
		return (0);
	}
}

int		find_next_space(char **grid, int *row, int *col)
{
	while (*row < 9)
	{
		(*col) = 0;
		while (*col < 9)
		{
			if (grid[*row][*col] == '.')
				return (1);
			(*col)++;
		}
		(*row)++;
	}
	return (0);
}
