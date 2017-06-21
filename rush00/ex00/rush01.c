/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: biremong <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/30 17:54:48 by biremong          #+#    #+#             */
/*   Updated: 2016/10/30 20:07:17 by biremong         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	print_top(int x)
{
	ft_putchar('/');
	while ((x - 2) > 0)
	{
		ft_putchar('*');
		x--;
	}
	if (x != 1)
	{
		ft_putchar('\\');
	}
	ft_putchar('\n');
}

void	print_mid(int x)
{
	ft_putchar('*');
	while ((x - 2) > 0)
	{
		ft_putchar(' ');
		x--;
	}
	if (x != 1)
	{
		ft_putchar('*');
	}
	ft_putchar('\n');
}

void	print_bot(int x)
{
	ft_putchar('\\');
	while ((x - 2) > 0)
	{
		ft_putchar('*');
		x--;
	}
	if (x != 1)
	{
		ft_putchar('/');
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
	print_top(x);
	while ((y - 2) > 0)
	{
		print_mid(x);
		y--;
	}
	if (y != 1)
	{
		print_bot(x);
	}
}
