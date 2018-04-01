/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree_level_count.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpollore <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/26 15:56:14 by jpollore          #+#    #+#             */
/*   Updated: 2018/01/26 16:14:59 by jpollore         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Returns number of levels a binary tree has
*/

int	btree_level_count(t_btree *root)
{
	if (root == NULL)
		return (0);
	if (root->left == NULL && root->right == NULL)
		return (0);
	return (1 + MAX(btree_level_count(root->left),
			btree_level_count(root->right)));
}
