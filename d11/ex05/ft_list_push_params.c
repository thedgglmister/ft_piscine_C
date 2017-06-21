/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_params.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: biremong <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/08 16:37:14 by biremong          #+#    #+#             */
/*   Updated: 2016/11/09 21:32:54 by biremong         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

t_list	*ft_list_push_params(int ac, char **av)
{
	t_list	*post_elem;
	t_list	*pre_elem;
	int		i;

	if (ac == 1)
	{
		return (0);
	}
	post_elem = ft_create_elem(av[1]);
	i = 2;
	while (i < ac)
	{
		pre_elem = ft_create_elem(av[i]);
		pre_elem->next = post_elem;
		post_elem = pre_elem;
		i++;
	}
	return (post_elem);
}
