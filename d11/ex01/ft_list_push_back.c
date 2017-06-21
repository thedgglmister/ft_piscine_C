/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_back.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: biremong <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/08 12:59:09 by biremong          #+#    #+#             */
/*   Updated: 2016/11/09 21:57:33 by biremong         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_push_back(t_list **begin_list, void *data)
{
	t_list	*new_elem;
	t_list	*current_elem;

	new_elem = ft_create_elem(data);
	if (!(*begin_list))
	{
		*begin_list = new_elem;
	}
	else
	{
		current_elem = *(begin_list);
		while (current_elem->next)
		{
			current_elem = current_elem->next;
		}
		current_elem->next = new_elem;
	}
	return ;
}
