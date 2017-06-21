/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: biremong <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/07 15:09:02 by biremong          #+#    #+#             */
/*   Updated: 2016/11/08 01:58:02 by biremong         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		*ft_map(int *tab, int length, int (*f)(int))
{
	int *return_vals;
	int i;

	return_vals = (int *)malloc(sizeof(int) * length);
	i = 0;
	while (i < length)
	{
		return_vals[i] = f(tab[i]);
		i++;
	}
	return (return_vals);
}
