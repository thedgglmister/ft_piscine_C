/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_btree.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: biremong <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/10 17:12:07 by biremong          #+#    #+#             */
/*   Updated: 2016/11/11 23:02:52 by biremong         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_BTREE_H

# define FT_BTREE_H
# include <stdlib.h>

typedef	struct		s_btree
{
	struct s_btree	*left;
	struct s_btree	*right;
	void			*item;
}					t_btree;
t_btree				*btree_create_node(void *item);
void				btree_apply_prefix(t_btree *root, void (*applyf)(void *));
void				btree_apply_infix(t_btree *root, void (*applyf)(void *));
void				btree_apply_suffix(t_btree *root, void (*applyf)(void *));
void				btree_insert_data(t_btree **root, void *item,\
		int (*cmpf)(void *, void *));
void				*btree_search_item(t_btree *root, void *data_ref,\
		int (*cmpf)(void *, void *));
int					btree_level_count(t_btree *root);
int					helper(t_btree *root, int count);
#endif
