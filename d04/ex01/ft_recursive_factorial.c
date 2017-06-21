/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: biremong <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/29 09:42:36 by biremong          #+#    #+#             */
/*   Updated: 2016/10/29 23:01:37 by biremong         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_factorial(int nb)
{
	if (nb > 12 || nb < 0)
	{
		return (0);
	}
	else if (nb == 0)
	{
		return (1);
	}
	if (nb > 0)
	{
		nb *= ft_recursive_factorial(nb - 1);
	}
	return (nb);
}
