/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree_deletefd.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpollore <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/23 17:17:57 by jpollore          #+#    #+#             */
/*   Updated: 2018/03/23 17:17:59 by jpollore         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Delete a binary tree node that has t_file nodes
*/

void	btree_deletefd(t_btree **node)
{
	if (!node)
		return ;
	delete_file((*node)->item);
	free(*node);
	*node = NULL;
}
