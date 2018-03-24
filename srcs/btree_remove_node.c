/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree_remove_node.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpollore <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/20 15:21:02 by jpollore          #+#    #+#             */
/*   Updated: 2018/03/23 17:34:47 by jpollore         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static t_btree	*found_one_child(t_btree **root, void (*delf)(t_btree **))
{
	t_btree *tmp;

	if (!(*root)->left)
		tmp = (*root)->right;
	else
		tmp = (*root)->left;
	(*delf)(root);
	return (tmp);
}

t_btree			*btree_remove_node(t_btree **root, void *data_ref,
					t_btree_fns *bfns)
{
	t_btree *tmp;

	if (!root || !data_ref || !bfns)
		return (NULL);
	if (!*root)
		return (*root);
	if ((*bfns->cmpf)(data_ref, (*root)->item) < 0)
		(*root)->left = btree_remove_node(&(*root)->left, data_ref, bfns);
	else if ((*bfns->cmpf)(data_ref, (*root)->item) > 0)
		(*root)->right = btree_remove_node(&(*root)->right, data_ref, bfns);
	else if (!(*root)->left || !(*root)->right)
		return (found_one_child(root, bfns->delf));
	else
	{
		tmp = btree_minvalue_node(&(*root)->right);
		btree_update_node(root, tmp->item, bfns->updatef);
		(*root)->right = btree_remove_node(&(*root)->right, tmp->item, bfns);
	}
	return (*root);
}
