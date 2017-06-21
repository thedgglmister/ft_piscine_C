/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: biremong <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/07 18:36:10 by biremong          #+#    #+#             */
/*   Updated: 2016/11/07 23:13:21 by biremong         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "doop.h"

int			main(int argc, char **argv)
{
	int		n;
	int		m;
	t_fnct	array[5];

	if (argc != 4)
	{
		return (0);
	}
	n = ft_atoi(argv[1]);
	m = ft_atoi(argv[3]);
	if ((argv[2][0] != '+' && argv[2][0] != '-' && argv[2][0] != '*'
			&& argv[2][0] != '/' && argv[2][0] != '%') || slen(argv[2]) != 1)
		write(1, "0\n", 2);
	else if (argv[2][0] == '/' && m == 0)
		write(1, "Stop : division by zero\n", 24);
	else if (argv[2][0] == '%' && m == 0)
		write(1, "Stop : modulo by zero\n", 22);
	else
	{
		mk_fnct_array(array);
		ft_putnbr(do_math(n, argv[2], m, array));
		ft_putchar('\n');
	}
	return (0);
}

void		ft_putchar(char c)
{
	write(1, &c, 1);
}

int			slen(char *str)
{
	int i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

void		ft_putnbr(long nb)
{
	if (nb == -2147483648)
	{
		write(1, "-2147483648", 11);
	}
	else if (nb < 0)
	{
		ft_putchar('-');
		ft_putnbr(-nb);
	}
	else if (nb < 10)
		ft_putchar('0' + nb);
	else
	{
		ft_putnbr(nb / 10);
		ft_putnbr(nb % 10);
	}
}

long int	ft_atoi(char *str)
{
	int			isneg;
	long int	result;

	isneg = 0;
	result = 0;
	while (*str == ' ' || *str == '\t' || *str == '\n'
			|| *str == '\v' || *str == '\r' || *str == '\f')
		str++;
	if (*str == '-')
		isneg = 1;
	if (*str == '-' || *str == '+')
		str++;
	while (*str >= '0' && *str <= '9')
	{
		result *= 10;
		result += *str - '0';
		str++;
	}
	if (isneg)
		result *= -1;
	return (result);
}
