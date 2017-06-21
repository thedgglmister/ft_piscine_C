/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   double_check.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgardner <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/06 15:19:00 by sgardner          #+#    #+#             */
/*   Updated: 2016/11/06 20:33:48 by sgardner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "sudoku.h"

int		double_check(char **grid)
{
	char	**blank;
	int		row;
	int		col;

	blank = get_blank_grid();
	row = 0;
	while (row < 9)
	{
		col = 0;
		while (col < 9)
		{
			if (is_safe(blank, row, col, grid[row][col]))
				blank[row][col] = grid[row][col];
			else
				return (0);
			col++;
		}
		row++;
	}
	return (1);
}

char	*ft_strcpy(char *dest, char *src)
{
	char	*origin;

	origin = dest;
	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';
	return (origin);
}

char	**get_blank_grid(void)
{
	char	**blank;
	int		i;

	blank = (char**)malloc(sizeof(char*) * 9);
	i = 0;
	while (i < 9)
	{
		blank[i] = (char*)malloc(sizeof(char) * 10);
		ft_strcpy(blank[i], ".........");
		i++;
	}
	return (blank);
}

int		grid_compare(char **grid, char **b_grid)
{
	int		row;
	int		col;

	row = 0;
	while (row < 9)
	{
		col = 0;
		while (col < 9)
		{
			if (grid[row][col] != b_grid[row][col])
				return (0);
			col++;
		}
		row++;
	}
	return (1);
}
