/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree_create_node.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: biremong <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/10 17:18:11 by biremong          #+#    #+#             */
/*   Updated: 2016/11/11 23:08:16 by biremong         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_btree.h"

t_btree	*btree_create_node(void *item)
{
	t_btree *new_node;

	new_node = (t_btree *)malloc(sizeof(t_btree));
	new_node->item = item;
	new_node->left = 0;
	new_node->right = 0;
	return (new_node);
}
