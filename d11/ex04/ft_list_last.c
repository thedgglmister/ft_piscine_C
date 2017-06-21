/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_size.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: biremong <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/08 15:57:31 by biremong          #+#    #+#             */
/*   Updated: 2016/11/09 22:08:26 by biremong         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

t_list	*ft_list_last(t_list *begin_list)
{
	t_list *current_elem;

	current_elem = begin_list;
	if (!current_elem)
	{
		return (0);
	}
	while (current_elem->next)
	{
		current_elem = current_elem->next;
	}
	return (curent_elem);
}
