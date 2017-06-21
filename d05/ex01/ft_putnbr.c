/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: biremong <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/27 08:18:36 by biremong          #+#    #+#             */
/*   Updated: 2016/11/01 14:41:41 by biremong         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_putchar(char c);
void	print_digits(int nb);

void	print_digits(int nb)
{
	unsigned long int	ten_power;

	ten_power = 1;
	while (nb / ten_power != 0)
	{
		ten_power *= 10;
	}
	ten_power /= 10;
	while (ten_power)
	{
		ft_putchar('0' + (nb / ten_power));
		nb %= ten_power;
		ten_power /= 10;
	}
	return ;
}

void	ft_putnbr(int nb)
{
	if (nb == -2147483648)
	{
		ft_putchar('-');
		ft_putchar('2');
		ft_putnbr(147483648);
	}
	else if (nb < 0)
	{
		ft_putchar('-');
		ft_putnbr(-nb);
	}
	else if (nb == 0)
	{
		ft_putchar('0');
	}
	else
	{
		print_digits(nb);
	}
	return ;
}
