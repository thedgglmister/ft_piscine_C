/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_show_tab.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: biremong <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/04 00:06:14 by biremong          #+#    #+#             */
/*   Updated: 2016/11/04 23:12:29 by biremong         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stock_par.h"

void	ft_show_tab(struct s_stock_par *par)
{
	int		i;

	i = 0;
	while (par[i].str)
	{
		ft_putstr(par[i].str);
		ft_putchar('\n');
		ft_putnbr(par[i].size_param);
		ft_putchar('\n');
		while (*(par[i].tab))
		{
			ft_putstr(*(par[i].tab));
			ft_putchar('\n');
			(par[i].tab)++;
		}
		i++;
	}
	return ;
}

void	ft_putstr(char *str)
{
	while (*str)
	{
		ft_putchar(*str);
		str++;
	}
	return ;
}

void	ft_putnbr(int nb)
{
	if (nb < 10)
		ft_putchar('0' + nb);
	else
	{
		ft_putnbr(nb / 10);
		ft_putnbr(nb % 10);
	}
	return ;
}
