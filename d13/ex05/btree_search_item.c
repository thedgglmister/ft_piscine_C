/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree_search_item.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: biremong <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/10 20:12:11 by biremong          #+#    #+#             */
/*   Updated: 2016/11/11 23:40:53 by biremong         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_btree.h"

void	*btree_search_item(t_btree *root, void *data_ref,\
		int (*cmpf)(void *, void *))
{
	t_btree *temp;

	if (root == 0)
		return (0);
	temp = btree_search_item(root->left, data_ref, cmpf);
	if (temp != 0)
		return (temp);
	if (cmpf(data_ref, root->item) == 0)
		return (root->item);
	temp = btree_search_item(root->right, data_ref, cmpf);
	if (temp != 0)
		return (temp);
	return (0);
}
