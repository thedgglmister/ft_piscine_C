/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: biremong <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/29 10:18:50 by biremong          #+#    #+#             */
/*   Updated: 2016/10/29 21:32:01 by biremong         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	result;

	if (power < 0)
	{
		return (0);
	}
	else if (power == 0 || nb == 1 || (nb == -1 && (power % 2 == 0)))
	{
		return (1);
	}
	else if (nb == 0)
	{
		return (0);
	}
	else if (nb == -1 && (power % 2 == 1))
	{
		return (-1);
	}
	result = 1;
	while (power > 0)
	{
		result *= nb;
		power--;
	}
	return (result);
}
