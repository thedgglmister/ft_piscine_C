/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_merge.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: biremong <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/08 22:09:43 by biremong          #+#    #+#             */
/*   Updated: 2016/11/09 23:17:13 by biremong         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_merge(t_list **begin_list1, t_list *begin_list2)
{
	t_list *list_pointer;

	list_pointer = *begin_list1;
	if (!list_pointer)
	{
		*begin_list1 = begin_list2;
	}
	else
	{
		while (list_pointer->next)
		{
			list_pointer = list_pointer->next;
		}
		list_pointer->next = begin_list2;
	}
}
