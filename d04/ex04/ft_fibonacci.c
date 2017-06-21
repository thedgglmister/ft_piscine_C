/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: biremong <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/29 11:30:21 by biremong          #+#    #+#             */
/*   Updated: 2016/10/29 21:49:54 by biremong         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_fibonacci(int index)
{
	int sum_of_prev_2;

	if (index < 0 || index > 46)
	{
		return (-1);
	}
	else if (index <= 1)
	{
		return (index);
	}
	else
	{
		sum_of_prev_2 = ft_fibonacci(index - 1) + ft_fibonacci(index - 2);
		return (sum_of_prev_2);
	}
}
