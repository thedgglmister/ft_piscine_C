/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree_level_count.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: biremong <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/11 01:34:36 by biremong          #+#    #+#             */
/*   Updated: 2016/11/11 23:16:03 by biremong         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_btree.h"

int		btree_level_count(t_btree *root)
{
	if (root == 0)
		return (0);
	else
		return (helper(root, -1));
}

int		helper(t_btree *root, int count)
{
	int left_length;
	int right_length;

	if (root == 0)
		return (count);
	count++;
	left_length = helper(root->left, count);
	right_length = helper(root->right, count);
	return (left_length < right_length ? right_length : left_length);
}
