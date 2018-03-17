/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree_create_node.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpollore <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/26 10:36:10 by jpollore          #+#    #+#             */
/*   Updated: 2018/01/26 10:55:58 by jpollore         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_btree	*btree_create_node(void *item)
{
	t_btree	*node;

	if ((node = (t_btree *)ft_memalloc(sizeof(*node))))
	{
		node->left = 0;
		node->right = 0;
		node->item = item;
	}
	return (node);
}
