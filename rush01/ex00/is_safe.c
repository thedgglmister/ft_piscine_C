/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ben_issafe.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: biremong <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/05 16:24:20 by biremong          #+#    #+#             */
/*   Updated: 2016/11/06 19:58:14 by sgardner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "sudoku.h"

int		is_safe(char **grid, int row, int col, char nb)
{
	if (row_check(grid, row, nb)
			&& col_check(grid, col, nb)
			&& box_check(grid, row - (row % 3), col - (col % 3), nb))
		return (1);
	else
		return (0);
}

int		row_check(char **grid, int row, char nb)
{
	int col;

	col = 0;
	while (col < 9)
	{
		if (nb == grid[row][col])
			return (0);
		col++;
	}
	return (1);
}

int		col_check(char **grid, int col, char nb)
{
	int row;

	row = 0;
	while (row < 9)
	{
		if (nb == grid[row][col])
			return (0);
		row++;
	}
	return (1);
}

int		box_check(char **grid, int row_start, int col_start, char nb)
{
	int b_row;
	int b_col;

	b_row = 0;
	while (b_row < 3)
	{
		b_col = 0;
		while (b_col < 3)
		{
			if (grid[row_start + b_row][col_start + b_col] == nb)
				return (0);
			b_col++;
		}
		b_row++;
	}
	return (1);
}
