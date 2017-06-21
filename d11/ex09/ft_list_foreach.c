/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_foreach.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: biremong <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/08 20:31:59 by biremong          #+#    #+#             */
/*   Updated: 2016/11/09 21:39:24 by biremong         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_foreach(t_list *begin_list, void (*f)(void *))
{
	t_list *list_pointer;

	list_pointer = begin_list;
	while (list_pointer)
	{
		f(list_pointer->data);
		list_pointer = list_pointer->next;
	}
}
