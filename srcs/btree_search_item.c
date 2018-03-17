/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree_search_item.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpollore <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/26 14:21:01 by jpollore          #+#    #+#             */
/*   Updated: 2018/01/26 16:04:38 by jpollore         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*btree_search_item(t_btree *root, void *data_ref,
			int (*cmpf)(void *, void *))
{
	if (!root || !cmpf)
		return (NULL);
	else if ((*cmpf)(data_ref, root->item) == 0)
		return (root->item);
	else if ((*cmpf)(data_ref, root->item) < 0)
		return (btree_search_item(root->left, data_ref, cmpf));
	else
		return (btree_search_item(root->right, data_ref, cmpf));
}
