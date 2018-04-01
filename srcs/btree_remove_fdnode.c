/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree_remove_fdnode.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpollore <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/23 17:51:48 by jpollore          #+#    #+#             */
/*   Updated: 2018/03/23 18:01:48 by jpollore         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Removes a node in the binary tree that has t_file as content
** 	we define a set of functions to perform the required actions
** 	for fd comparison, delete file, and update file nodes
*/

t_btree	*btree_remove_fdnode(t_btree **root, void *data_ref)
{
	t_btree_fns	*fns;
	t_btree		*new_root;

	if ((fns = (t_btree_fns *)ft_memalloc(sizeof(*fns))))
	{
		fns->cmpf = &fdsearchcmp;
		fns->delf = &btree_deletefd;
		fns->updatef = &btree_updatefd;
		new_root = btree_remove_node(root, data_ref, fns);
		free(fns);
		return (new_root);
	}
	return (NULL);
}
