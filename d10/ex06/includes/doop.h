/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do-op.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: biremong <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/07 18:23:22 by biremong          #+#    #+#             */
/*   Updated: 2016/11/07 23:04:28 by biremong         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOOP_H

# define DOOP_H
# include <unistd.h>

typedef struct	s_fcnt
{
	char	symbol;
	long int(*f)(long int, long int);
}				t_fnct;

long int		add(long int n, long int m);
long int		subtract(long int n, long int m);
long int		multiply(long int n, long int m);
long int		divide(long int n, long int m);
long int		mod(long int n, long int m);
long int		do_math(long int n, char *symbol, long int m, t_fnct *array);
void			ft_putchar(char c);
void			ft_putnbr(long nb);
long int		ft_atoi(char *str);
void			mk_fnct_array(t_fnct *array);
int				slen(char *str);

#endif
