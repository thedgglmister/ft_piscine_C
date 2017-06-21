/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_match.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jinfeld <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/13 17:36:32 by jinfeld           #+#    #+#             */
/*   Updated: 2016/11/13 22:56:23 by biremong         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush.h"

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		write(1, &str[i], 1);
		i++;
	}
}

void	print_rush(char *rush, char w, char h)
{
	ft_putchar('[');
	ft_putstr(rush);
	ft_putchar(']');
	ft_putstr(" [");
	ft_putnbr(w);
	ft_putstr("]");
	ft_putstr(" [");
	ft_putnbr(h);
	ft_putstr("]");
}

void	print_match(int i, int width, int height, int mult_result)
{
	char *rushes[5];

	rushes[0] = "rush-00";
	rushes[1] = "rush-01";
	rushes[2] = "rush-02";
	rushes[3] = "rush-03";
	rushes[4] = "rush-04";
	if (!mult_result)
	{
		print_rush(rushes[i], width, height);
	}
	else
	{
		ft_putstr(" || ");
		print_rush(rushes[i], width, height);
	}
}

void	ft_putnbr(int nb)
{
	if (nb == -2147483648)
	{
		write(1, "-2147483648", 11);
		return ;
	}
	if (nb < 0)
	{
		write(1, "-", 1);
		ft_putnbr(-nb);
		return ;
	}
	if (nb < 10)
		ft_putchar(nb + '0');
	else 
	{
		ft_putnbr(nb / 10);
		ft_putnbr(nb % 10);
	}
}
