/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree_insert_data.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: biremong <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/10 19:23:24 by biremong          #+#    #+#             */
/*   Updated: 2016/11/11 23:10:54 by biremong         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_btree.h"

void	btree_insert_data(t_btree **root, void *item,\
		int (*cmpf)(void *, void *))
{
	t_btree *current_root;

	current_root = *root;
	if (current_root == 0)
	{
		current_root = btree_create_node(item);
		*root = current_root;
		return ;
	}
	if (cmpf(item, current_root->item) < 0)
	{
		if (current_root->left == 0)
			current_root->left = btree_create_node(item);
		else
			btree_insert_data(&current_root->left, item, cmpf);
	}
	else
	{
		if (current_root->right == 0)
			current_root->right = btree_create_node(item);
		else
			btree_insert_data(&current_root->right, item, cmpf);
	}
	return ;
}
