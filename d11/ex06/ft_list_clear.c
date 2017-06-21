/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_clear.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: biremong <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/08 17:19:58 by biremong          #+#    #+#             */
/*   Updated: 2016/11/09 21:34:32 by biremong         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_clear(t_list **begin_list)
{
	t_list	*temp_pntr;

	while (*begin_list)
	{
		temp_pntr = *begin_list;
		free(*begin_list);
		*begin_list = temp_pntr->next;
	}
	return ;
}
