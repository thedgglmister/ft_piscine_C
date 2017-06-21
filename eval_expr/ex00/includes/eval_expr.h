/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   eval_expr.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: biremong <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/13 10:37:37 by biremong          #+#    #+#             */
/*   Updated: 2016/11/13 11:08:03 by biremong         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EVAL_EXPR_H

# define EVAL_EXPR_H
# include <stdlib.h>
# include <unistd.h>

typedef struct	s_node
{
	char			type;
	char			op;
	int				num;
	struct s_node	*next;
}				t_node;
void			ft_shunting_yard(char *expr, t_node **stack_top,\
			t_node **queue_start);
int				ft_less_precedence(char c1, char c2);
int				ft_is_operator(char c);
int				ft_is_number(char *expr, int i);
int				ft_get_number(char *expr, int *i);
void			ft_push_num(t_node **list_top, int num);
void			ft_push_op(t_node **list_top, char op);
char			ft_pop_op(t_node **list_top);
void			ft_skip_ws(char *expr, int *i);
void			ft_reverse_list(t_node **list_top);
void			ft_remove_next_node(t_node *node);
int				do_math(int n, int m, char op);
int				parse_queue(t_node *list_top);
void			ft_parentheses_clear(t_node **stack_top, t_node **queue_start);
void			ft_putnbr(int nb);
void			ft_putchar(char c);
int				eval_expr(char *str);

#endif
