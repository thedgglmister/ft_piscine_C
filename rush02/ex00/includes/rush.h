/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ben_rush.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: biremong <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/13 15:09:00 by biremong          #+#    #+#             */
/*   Updated: 2016/11/13 22:53:04 by biremong         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RUSH_H
# define RUSH_H

# include <stdlib.h>
# include <unistd.h>

typedef struct		s_node
{
	char			data;
	struct s_node	*next;
}					t_node;

void				print_fail(void);
void				compare_rushes(t_node *begin_list, int width, int height);
int					listcmp(t_node *begin_list1, t_node *begin_list2);
void				rush00(int x, int y, t_node **begin_list);
void				rush01(int x, int y, t_node **begin_list);
void				rush02(int x, int y, t_node **begin_list);
void				rush03(int x, int y, t_node **begin_list);
void				rush04(int x, int y, t_node **begin_list);
int					rush_chars(int x, char *chars, t_node **begin_list);
int					get_width(t_node *begin_list);
int					get_height(t_node *begin_list);
int					save_stdin(t_node **begin_list);
t_node				*create_node(char c);
void				push_node(t_node **begin_list, char c);
void				ft_putchar(char c);
void				ft_putstr(char *str);
void				print_rush(char *rush, char w, char h);
void				print_match(int i, int width, int height,\
		int mult_result);
void				list_clear(t_node **begin_list);
void				ft_putnbr(int nb);
#endif
