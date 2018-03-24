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

t_btree	*btree_remove_fdnode(t_btree **root, void *data_ref)
{
	t_btree_fns	*fns;

	if ((fns = (t_btree_fns *)ft_memalloc(sizeof(*fns))))
	{
		fns->cmpf = &fdsearchcmp;
		fns->delf = &btree_deletefd;
		fns->updatef = &btree_updatefd;
		return (btree_remove_node(root, data_ref, fns));
	}
	return (NULL);
}
