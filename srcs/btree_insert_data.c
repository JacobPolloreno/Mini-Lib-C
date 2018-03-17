/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree_insert_data.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpollore <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/26 14:13:27 by jpollore          #+#    #+#             */
/*   Updated: 2018/01/26 15:19:00 by jpollore         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	btree_insert_data(t_btree **root, void *item,
			int (*cmpf)(void *, void*))
{
	if (!root || !item || !cmpf)
		return ;
	if (*root == NULL)
		(*root) = btree_create_node(item);
	else
	{
		if ((*cmpf)(item, (*root)->item) < 0)
			btree_insert_data(&(*root)->left, item, cmpf);
		else
			btree_insert_data(&(*root)->right, item, cmpf);
	}
}
