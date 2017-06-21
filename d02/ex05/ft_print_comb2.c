/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: biremong <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/27 07:15:54 by biremong          #+#    #+#             */
/*   Updated: 2016/10/27 07:51:10 by biremong         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_putchar(char c);
void	print_ints(int x, int y);

void	print_ints(int x, int y)
{
	int tx;
	int ux;
	int ty;
	int uy;

	tx = x / 10;
	ux = x % 10;
	ty = y / 10;
	uy = y % 10;
	ft_putchar('0' + tx);
	ft_putchar('0' + ux);
	ft_putchar(' ');
	ft_putchar('0' + ty);
	ft_putchar('0' + uy);
	return ;
}

void	ft_print_comb2(void)
{
	int x;
	int y;

	x = 0;
	y = 1;
	while (x < 99)
	{
		while (y < 100)
		{
			print_ints(x, y);
			if (x != 98)
			{
				ft_putchar(',');
				ft_putchar(' ');
			}
			y++;
		}
		x++;
		y = x + 1;
	}
	return ;
}
