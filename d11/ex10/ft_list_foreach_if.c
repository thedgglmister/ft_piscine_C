/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_foreach.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: biremong <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/08 20:31:59 by biremong          #+#    #+#             */
/*   Updated: 2016/11/09 21:45:28 by biremong         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_foreach_if(t_list *begin_list, void (*f)(void *),\
		void *data_ref, int (*cmp)())
{
	t_list *list_pointer;

	list_pointer = begin_list;
	while (list_pointer)
	{
		if (cmp(list_pointer->data, data_ref) == 0)
		{
			f(list_pointer->data);
		}
		list_pointer = list_pointer->next;
	}
}
