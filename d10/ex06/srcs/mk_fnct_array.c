/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mk_fnct_array.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: biremong <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/07 18:22:33 by biremong          #+#    #+#             */
/*   Updated: 2016/11/08 01:41:43 by biremong         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "doop.h"

void		mk_fnct_array(t_fnct *array)
{
	array[0].symbol = '+';
	array[0].f = &add;
	array[1].symbol = '-';
	array[1].f = &subtract;
	array[2].symbol = '*';
	array[2].f = &multiply;
	array[3].symbol = '/';
	array[3].f = &divide;
	array[4].symbol = '%';
	array[4].f = &mod;
	return ;
}

long int	do_math(long int n, char *symbol, long int m, t_fnct *array)
{
	int		i;
	long int(*f)(long int, long int);

	i = 0;
	while (i < 5)
	{
		if (array[i].symbol == symbol[0])
		{
			f = array[i].f;
		}
		i++;
	}
	return (f(n, m));
}
