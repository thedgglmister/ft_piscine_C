/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: biremong <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/29 12:13:36 by biremong          #+#    #+#             */
/*   Updated: 2016/10/29 16:31:30 by biremong         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	get_factor_max(int nb);

int	get_factor_max(int nb)
{
	int i;

	i = 0;
	if (nb > 2147395600)
	{
		return (46341);
	}
	while (nb > i * i)
	{
		i++;
	}
	return (i);
}

int	ft_is_prime(int nb)
{
	int divisor;
	int factor_max;

	if (nb < 2)
	{
		return (0);
	}
	if (nb == 2)
	{
		return (1);
	}
	factor_max = get_factor_max(nb);
	divisor = 2;
	while (divisor <= factor_max)
	{
		if (nb % divisor == 0)
		{
			return (0);
		}
		divisor++;
	}
	return (1);
}
