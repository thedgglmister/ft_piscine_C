/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sudoku.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgardner <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/06 19:42:33 by sgardner          #+#    #+#             */
/*   Updated: 2016/11/06 21:34:15 by sgardner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SUDOKU_H
# define SUDOKU_H
# include <stdlib.h>
# include <unistd.h>

/*
** main.c
*/

char	**build_grid(char **argv);
int		check_format(int argc, char **argv);
int		display_error(void);
void	print_grid(char **grid);

/*
** solve.c
*/

int		find_next_space(char **grid, int *row, int *col);
int		solve(char **grid, char min, char max, int n);

/*
** is_safe.c
*/

int		is_safe(char **grid, int row, int col, char nb);
int		box_check(char **grid, int row_start, int col_start, char nb);
int		col_check(char **grid, int col, char nb);
int		row_check(char **grid, int row, char nb);

/*
** double_check.c
*/

int		double_check(char **grid);
char	**get_blank_grid(void);
char	*ft_strcpy(char *dest, char *src);
int		grid_compare(char **grid, char **b_grid);
#endif
