/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_reverse.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: biremong <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/08 19:39:09 by biremong          #+#    #+#             */
/*   Updated: 2016/11/09 23:05:13 by biremong         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_reverse(t_list **begin_list)
{
	t_list *list_pointer;
	t_list *pre_temp;
	t_list *post_temp;

	list_pointer = *begin_list;
	pre_temp = 0;
	while (list_pointer)
	{
		post_temp = list_pointer->next;
		list_pointer->next = pre_temp;
		pre_temp = list_pointer;
		list_pointer = post_temp;
	}
	*begin_list = pre_temp;
}
