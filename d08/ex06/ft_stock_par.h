/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stock_par.h                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: biremong <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/04 00:09:49 by biremong          #+#    #+#             */
/*   Updated: 2016/11/04 23:12:54 by biremong         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_STOCK_PAR_H

# define FT_STOCK_PAR_H
# include <stdlib.h>

typedef struct	s_stock_par
{
	int		size_param;
	char	*str;
	char	*copy;
	char	**tab;
}				t_stock_par;
t_stock_par		*ft_param_to_tab(int ac, char **av);
void			ft_show_tab(t_stock_par *par);
int				ft_strlen(char *s1);
void			ft_strcpy(char *s1, char *s2);
void			ft_putstr(char *str);
void			ft_putnbr(int nb);
char			**ft_split_whitespaces(char *str);
int				ft_putchar(char c);

#endif
