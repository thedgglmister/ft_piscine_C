/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_foreach.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: biremong <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/08 20:31:59 by biremong          #+#    #+#             */
/*   Updated: 2016/11/09 00:35:50 by biremong         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

t_list	*ft_list_find(t_list *begin_list, void *data_ref, int (*cmp)())
{
	t_list *list_pointer;

	list_pointer = begin_list;
	while (list_pointer)
	{
		if (cmp(list_pointer->data, data_ref) == 0)
		{
			return (list_pointer);
		}
		list_pointer = list_pointer->next;
	}
	return (0);
}
