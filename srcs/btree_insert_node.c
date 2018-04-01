/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree_insert_node.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpollore <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/26 14:13:27 by jpollore          #+#    #+#             */
/*   Updated: 2018/03/20 17:16:49 by jpollore         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Insert a node into the binary tree using prefix traversal
*/

void	btree_insert_node(t_btree **root, void *item,
			int (*cmpf)(void *, void *))
{
	if (!root || !item || !cmpf)
		return ;
	if (*root == NULL)
		(*root) = btree_create_node(item);
	else
	{
		if ((*cmpf)(item, (*root)->item) < 0)
			btree_insert_node(&(*root)->left, item, cmpf);
		else
			btree_insert_node(&(*root)->right, item, cmpf);
	}
}
