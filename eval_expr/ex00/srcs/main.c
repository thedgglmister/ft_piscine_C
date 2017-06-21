/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: biremong <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/13 10:53:03 by biremong          #+#    #+#             */
/*   Updated: 2016/11/13 23:08:49 by biremong         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "eval_expr.h"

int		main(int ac, char **av)
{
	if (ac > 1)
	{
		ft_putnbr(eval_expr(av[1]));
		ft_putchar('\n');
	}
	return (0);
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
		nb *= -1;
		ft_putnbr(nb);
		return ;
	}
	if (nb < 10)
		ft_putchar('0' + nb);
	if (nb >= 10)
	{
		ft_putnbr(nb / 10);
		ft_putnbr(nb % 10);
	}
	return ;
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
	return ;
}

int		eval_expr(char *str)
{
	t_node	*stack_top;
	t_node	*queue_start;
	int		result;

	stack_top = 0;
	queue_start = 0;
	ft_shunting_yard(str, &stack_top, &queue_start);
	result = parse_queue(queue_start);
	return (result);
}
