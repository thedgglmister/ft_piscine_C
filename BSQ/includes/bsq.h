/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ben_rush.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: biremong <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/13 15:09:00 by biremong          #+#    #+#             */
/*   Updated: 2016/11/16 21:45:57 by sescolas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BSQ_H
# define BSQ_H

# include <sys/types.h>
# include <fcntl.h>
# include <stdlib.h>
# include <unistd.h>
# include <stdio.h>

typedef struct		s_glob
{
	int				rows;
	int				cols;
	char			empty;
	char			obstacle;
	char			full;
}					t_glob;

typedef struct		s_sqinfo
{
	int				max;
	int				x;
	int				y;
}					t_sqinfo;

typedef struct		s_node
{
	char			data;
	struct s_node	*next;
}					t_node;

int					ft_max(int a, int b);
int					ft_atoi(t_node *list, int n);
int					is_numeric(t_node *begin_list, int n);
t_node				*create_node(char c);
void				push_node(t_node **begin_list, char c);
int					list_length(t_node *begin_list);
void				copy_list_to_array(t_node *begin_list, char *array);
void				clear_list(t_node **begin_list);
int					process_globals(t_node **list, t_glob *globals);
int					handle_header(int fd, t_glob *globals,\
				t_node *begin_map_header);
int					handle_first_row(int fd, t_glob *globals, char **map_array);
int					complete_array(int fd, char **map_array, t_glob globals);
int					read_map(int fd, t_glob *globals, char ***map_array,\
				t_node *begin_map_header);
int					**create_number_map(t_glob globals, char **map_array);
void				populate_number_map(int ***number_map, char **map_array,\
				t_glob globals);
int					scan(char **map_array, int i, int j, char obstacle);
void				scan_number_map(t_sqinfo *sqinfo, t_glob globals,\
				int ***number_map);
int					square_check(int i, int j, int max, int ***number_map);
void				print_map(char **map_array, t_glob globals,\
				t_sqinfo sqinfo);
void				ft_putchar(char c);
void				solve_map(int fd, t_node *begin_map_header);
int					check_extra_lines(int fd);
int					check_stdin(t_node **begin_map_header);
void				loop_argv(int argc, char **argv);
void				clear_array(char **map_array);
#endif
