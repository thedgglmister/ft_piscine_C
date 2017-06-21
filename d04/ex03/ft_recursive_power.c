/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: biremong <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/29 11:17:11 by biremong          #+#    #+#             */
/*   Updated: 2016/10/29 21:43:30 by biremong         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_power(int nb, int power)
{
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
	else if (power > 0)
	{
		nb *= ft_recursive_power(nb, power - 1);
	}
	return (nb);
}
