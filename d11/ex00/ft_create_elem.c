/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_create_elem.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: biremong <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/08 12:22:07 by biremong          #+#    #+#             */
/*   Updated: 2016/11/09 22:17:58 by biremong         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

t_list	*ft_create_elem(void *data)
{
	t_list *new_elem;

	new_elem = (t_list *)malloc(sizeof(t_list));
	if (new_elem)
	{
		new_elem->data = data;
		new_elem->next = (void *)0;
	}
	return (new_elem);
}
