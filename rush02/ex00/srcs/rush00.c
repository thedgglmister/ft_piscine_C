/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jinfeld <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/30 17:32:57 by jinfeld           #+#    #+#             */
/*   Updated: 2016/11/13 18:03:31 by biremong         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush.h"

void	rush00(int x, int y, t_node **begin_list)
{
	int		i;
	char	chars1[3];
	char	chars2[3];
	char	chars3[3];

	chars1[0] = 'o';
	chars1[1] = '-';
	chars1[2] = 'o';
	chars2[0] = '|';
	chars2[1] = ' ';
	chars2[2] = '|';
	chars3[0] = 'o';
	chars3[1] = '-';
	chars3[2] = 'o';
	i = 0;
	while (i < y)
	{
		if (i == 0)
			rush_chars(x, chars1, begin_list);
		if (i < (y - 1) && i != 0)
			rush_chars(x, chars2, begin_list);
		if (y > 1 && i == (y - 1))
			rush_chars(x, chars3, begin_list);
		i++;
	}
}
