/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgardner <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/06 13:53:18 by sgardner          #+#    #+#             */
/*   Updated: 2016/11/06 20:34:40 by sgardner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "sudoku.h"

/*
** This is how norm wants comments to look
*/

int		main(int argc, char **argv)
{
	char	**grid;
	char	**b_grid;

	grid = NULL;
	if (!check_format(argc, argv))
		return (display_error());
	grid = build_grid(argv);
	if (!solve(grid, '1', '9', 1))
		return (display_error());
	b_grid = build_grid(argv);
	solve(b_grid, '9', '1', -1);
	if (!grid_compare(grid, b_grid))
		return (display_error());
	if (!double_check(grid))
		return (display_error());
	print_grid(grid);
}

char	**build_grid(char **argv)
{
	char	**grid;
	int		row;
	char	*row_values;
	int		i;

	grid = (char**)malloc(sizeof(char*) * 9);
	row = 1;
	while (row < 10)
	{
		row_values = (char*)malloc(sizeof(char*) * 10);
		i = 0;
		while (i < 9)
		{
			row_values[i] = argv[row][i];
			i++;
		}
		grid[row - 1] = row_values;
		row++;
	}
	return (grid);
}

int		check_format(int argc, char **argv)
{
	int		row;
	int		col;
	char	c;

	if (argc != 10)
		return (0);
	row = 1;
	while (row < 10)
	{
		col = 0;
		while (col < 9)
		{
			c = argv[row][col];
			if (c != '.' && (c < '0' || c > '9'))
				return (0);
			col++;
		}
		row++;
	}
	return (1);
}

int		display_error(void)
{
	write(2, "Error\n", 6);
	return (1);
}

void	print_grid(char **grid)
{
	int		row;
	int		col;

	row = 0;
	while (row < 9)
	{
		col = 0;
		while (col < 9)
		{
			write(1, &(grid[row][col]), 1);
			if (col < 8)
				write(1, " ", 1);
			col++;
		}
		write(1, "\n", 1);
		row++;
	}
}
