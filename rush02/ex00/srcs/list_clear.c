/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_clear.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: biremong <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/08 17:19:58 by biremong          #+#    #+#             */
/*   Updated: 2016/11/13 21:12:04 by biremong         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush.h"

void	list_clear(t_node **begin_list)
{
	t_node	*temp_pntr;

	while (*begin_list)
	{
		temp_pntr = *begin_list;
		free(*begin_list);
		*begin_list = temp_pntr->next;
	}
	return ;
}
