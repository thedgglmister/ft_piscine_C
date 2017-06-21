/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_at.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: biremong <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/08 19:09:43 by biremong          #+#    #+#             */
/*   Updated: 2016/11/09 22:37:00 by biremong         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

t_list	*ft_list_at(t_list *begin_list, unsigned int nbr)
{
	if (nbr == 0 || !begin_list)
		return (0);
	while (nbr - 1 > 0)
	{
		if (!(begin_list->next))
		{
			return (0);
		}
		begin_list = begin_list->next;
		nbr--;
	}
	return (begin_list);
}
