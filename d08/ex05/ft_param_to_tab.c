/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_param_to_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: biremong <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/03 21:50:14 by biremong          #+#    #+#             */
/*   Updated: 2016/11/04 23:08:49 by biremong         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stock_par.h"

t_stock_par		*ft_param_to_tab(int ac, char **av)
{
	t_stock_par			*arr;
	int					i;

	arr = (t_stock_par *)malloc(sizeof(t_stock_par) * (ac + 1));
	i = 0;
	while (i < ac)
	{
		arr[i].size_param = ft_strlen(av[i]);
		arr[i].str = av[i];
		arr[i].copy = (char *)malloc(sizeof(char) * (arr[i].size_param + 1));
		ft_strcpy(arr[i].copy, av[i]);
		arr[i].tab = ft_split_whitespaces(av[i]);
		i++;
	}
	arr[i].str = 0;
	return (arr);
}

int				ft_strlen(char *s1)
{
	int		i;

	i = 0;
	while (s1[i])
		i++;
	return (i);
}

void			ft_strcpy(char *s1, char *s2)
{
	int		i;

	i = 0;
	while (s2[i])
	{
		s1[i] = s2[i];
		i++;
	}
	s1[i] = '\0';
	return ;
}
