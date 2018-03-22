/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree_remove_node.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpollore <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/20 15:21:02 by jpollore          #+#    #+#             */
/*   Updated: 2018/03/22 12:48:22 by jpollore         ###   ########.fr       */
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
		int (*cmpf)(void *, void*), void (*delf)(t_btree **),
		void *(*updatef)(void **, void *))
{
	t_btree *tmp;

	if (!root || !data_ref || !cmpf)
		return (NULL);
	if (!*root)
		return (*root);
	if ((*cmpf)(data_ref, (*root)->item) < 0)
		(*root)->left = btree_remove_node(&(*root)->left, data_ref,
			cmpf, delf, updatef);
	else if ((*cmpf)(data_ref, (*root)->item) > 0)
		(*root)->right = btree_remove_node(&(*root)->right, data_ref,
			cmpf, delf, updatef);
	else if (!(*root)->left || !(*root)->right)
		return (found_one_child(root, delf));
	else
	{
		tmp = btree_minvalue_node(&(*root)->right);
		btree_update_node(root, tmp->item, updatef);
		(*root)->right = btree_remove_node(&(*root)->right,
			tmp->item, cmpf, delf, updatef);
	}
	return (*root);
}
