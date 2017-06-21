/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_takes_place.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: biremong <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/03 18:04:15 by biremong          #+#    #+#             */
/*   Updated: 2016/11/04 14:07:50 by biremong         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

void	ft_takes_place(int hour)
{
	int		start;
	int		end;
	char	start_a_or_p;
	char	end_a_or_p;

	hour = hour < 0 ? ((hour % 24) + 24) : hour;
	start = hour % 12;
	start = start == 0 ? 12 : start;
	if ((hour / 12) % 2 == 0)
		start_a_or_p = 'A';
	else
		start_a_or_p = 'P';
	end = (start + 1) % 12;
	end = end == 0 ? 12 : end;
	if (((hour + 1) / 12) % 2 == 0)
		end_a_or_p = 'A';
	else
		end_a_or_p = 'P';
	printf("THE FOLLOWING TAKES PLACE BETWEEN %.2d.00 %c.M."
			"AND %.2d.00 %c.M.\n", start, start_a_or_p, end, end_a_or_p);
}
