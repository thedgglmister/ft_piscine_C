/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: biremong <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/02 17:51:28 by biremong          #+#    #+#             */
/*   Updated: 2016/11/03 13:24:55 by biremong         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		*ft_range(int min, int max)
{
	int				*range;
	int				i;
	unsigned int	size;

	if (min >= max)
		return (void *)0;
	size = max - min;
	if (size > 2147483647)
		return (0);
	range = (int *)malloc(sizeof(int) * size);
	i = 0;
	while (min < max)
	{
		range[i++] = min++;
	}
	return (range);
}
