/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stdin_functions.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: biremong <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/14 17:32:11 by biremong          #+#    #+#             */
/*   Updated: 2016/11/16 21:20:41 by sescolas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bsq.h"

int		check_stdin(t_node **begin_map_header)
{
	int		ret;
	int		fd;
	char	buf[1];
	char	*filepath;

	while ((ret = read(0, buf, 1)) && buf[0] != '\n')
	{
		if (ret < 0)
			return (0);
		push_node(begin_map_header, buf[0]);
	}
	filepath = malloc(sizeof(char) * (list_length(*begin_map_header) + 1));
	copy_list_to_array(*begin_map_header, filepath);
	fd = open(filepath, O_RDONLY);
	return (fd);
}

int		handle_header(int fd, t_glob *globals, t_node *begin_map_header)
{
	int		ret;
	char	buf[1];

	if (!begin_map_header)
	{
		while ((ret = read(fd, buf, 1)) && buf[0] != '\n')
		{
			if (ret < 0)
				return (0);
			push_node(&begin_map_header, buf[0]);
		}
	}
	if (!begin_map_header)
		return (0);
	return (process_globals(&begin_map_header, globals));
}

int		handle_first_row(int fd, t_glob *globals, char **map_array)
{
	int		ret;
	char	buf[1];
	t_node	*begin_first_row;
	int		cols_count;
	int		doooo;

	doooo = 1;
	begin_first_row = NULL;
	cols_count = 0;
	while (((ret = read(fd, buf, 1)) && buf[0] != '\n') || doooo)
	{
		if (ret <= 0 || buf[0] == '\n')
			return (0);
		if (buf[0] != globals->empty && buf[0] != globals->obstacle)
			return (0);
		cols_count++;
		push_node(&begin_first_row, buf[0]);
		doooo = 0;
	}
	globals->cols = cols_count;
	map_array[0] = malloc(sizeof(char) * cols_count + 1);
	copy_list_to_array(begin_first_row, map_array[0]);
	clear_list(&begin_first_row);
	return (1);
}

int		complete_array(int fd, char **map_array, t_glob globals)
{
	int		i;
	int		j;
	int		ret;
	char	buf[1];

	i = 1;
	while (i < globals.rows)
	{
		map_array[i] = malloc(sizeof(char) * globals.cols + 1);
		j = -1;
		while (++j < globals.cols)
		{
			if ((ret = read(fd, buf, 1)))
				map_array[i][j] = buf[0];
			if (buf[0] != globals.empty && buf[0] != globals.obstacle)
				return (0);
		}
		if ((ret = read(fd, buf, 1)) && buf[0] != '\n')
			return (0);
		map_array[i][j] = '\0';
		i++;
	}
	map_array[i] = 0;
	return (1);
}

int		check_extra_lines(int fd)
{
	char buf[1];

	if (!read(fd, buf, 1))
		return (0);
	return (1);
}
