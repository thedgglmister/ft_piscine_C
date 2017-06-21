/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: biremong <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/30 17:26:56 by biremong          #+#    #+#             */
/*   Updated: 2016/10/30 18:13:28 by biremong         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	print_oo(int x)
{
	ft_putchar('o');
	while ((x - 2) > 0)
	{
		ft_putchar('-');
		x--;
	}
	if (x != 1)
	{
		ft_putchar('o');
	}
	ft_putchar('\n');
}

void	print_bar(int x)
{
	ft_putchar('|');
	while ((x - 2) > 0)
	{
		ft_putchar(' ');
		x--;
	}
	if (x != 1)
	{
		ft_putchar('|');
	}
	ft_putchar('\n');
}

void	rush(int x, int y)
{
	if (x < 0 || y < 0)
	{
		write(2, "Error: Arguments cannot be negative\n", 36);
		return ;
	}
	if (x == 0 || y == 0)
	{
		return ;
	}
	print_oo(x);
	while ((y - 2) > 0)
	{
		print_bar(x);
		y--;
	}
	if (y != 1)
	{
		print_oo(x);
	}
}
