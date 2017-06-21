/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: biremong <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/16 11:06:49 by biremong          #+#    #+#             */
/*   Updated: 2016/11/16 21:45:29 by sescolas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bsq.h"

int		main(int argc, char **argv)
{
	int		fd;
	t_node	*begin_map_header;

	begin_map_header = NULL;
	if (argc == 1)
	{
		fd = check_stdin(&begin_map_header);
		if (fd >= 0)
		{
			clear_list(&begin_map_header);
			solve_map(fd, 0);
			close(fd);
		}
		else
			solve_map(0, begin_map_header);
	}
	else
		loop_argv(argc, argv);
	return (0);
}

void	loop_argv(int argc, char **argv)
{
	int i;
	int fd;

	i = 1;
	while (i < argc)
	{
		fd = open(argv[i++], O_RDONLY);
		if (fd < 0)
		{
			write(2, "map error\n", 10);
			continue;
		}
		else
		{
			solve_map(fd, 0);
			close(fd);
		}
	}
}

void	solve_map(int fd, t_node *begin_map_header)
{
	t_glob		globals;
	t_sqinfo	sqinfo;
	char		**map_array;
	int			**number_map;

	if (!read_map(fd, &globals, &map_array, begin_map_header))
	{
		write(2, "map error\n", 10);
		return ;
	}
	number_map = create_number_map(globals, map_array);
	sqinfo.max = 0;
	sqinfo.x = 0;
	sqinfo.y = 0;
	scan_number_map(&sqinfo, globals, &number_map);
	print_map(map_array, globals, sqinfo);
}

int		read_map(int fd, t_glob *globals, char ***map_array,\
	t_node *begin_map_header)
{
	if (!handle_header(fd, globals, begin_map_header))
		return (0);
	else
		*map_array = malloc(sizeof(char *) * globals->rows + 1);
	if (!handle_first_row(fd, globals, *map_array) ||
			!complete_array(fd, *map_array, *globals))
		return (0);
	else if (check_extra_lines(fd))
		return (0);
	return (1);
}
