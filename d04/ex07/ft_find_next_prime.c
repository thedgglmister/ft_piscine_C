/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: biremong <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/29 12:13:36 by biremong          #+#    #+#             */
/*   Updated: 2016/10/29 19:38:46 by biremong         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb);
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

int	ft_find_next_prime(int nb)
{
	if (nb <= 2)
	{
		return (2);
	}
	else if (ft_is_prime(nb))
	{
		return (nb);
	}
	else if (nb % 2 == 0)
	{
		nb++;
	}
	while (!ft_is_prime(nb))
	{
		nb += 2;
	}
	return (nb);
}
