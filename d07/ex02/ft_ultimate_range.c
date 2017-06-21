/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: biremong <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/02 18:32:33 by biremong          #+#    #+#             */
/*   Updated: 2016/11/03 17:19:19 by biremong         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_ultimate_range(int **range, int min, int max)
{
	int				i;
	long long int	length;

	length = max - min;
	if (length > 2147483647 || length <= 0)
	{
		*range = (void *)0;
		return (0);
	}
	*range = (int *)malloc(sizeof(int) * length);
	i = 0;
	while (min < max)
	{
		(*range)[i++] = min++;
	}
	return (sizeof(int) * length);
}
