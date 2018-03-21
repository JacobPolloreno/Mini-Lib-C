/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree_minvalue_node.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpollore <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/20 15:31:53 by jpollore          #+#    #+#             */
/*   Updated: 2018/03/20 16:09:47 by jpollore         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_btree *btree_minvalue_node(t_btree **root)
{
	t_btree *cursor;

	if (!root)
		return (NULL);
	cursor = *root;
	while (cursor->left)
		cursor = cursor->left;
	return (cursor);
}
