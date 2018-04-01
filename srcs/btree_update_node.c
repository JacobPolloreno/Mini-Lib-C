/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree_update_node.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpollore <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/20 15:39:00 by jpollore          #+#    #+#             */
/*   Updated: 2018/03/22 12:37:35 by jpollore         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Update a nodes data using an update function that takes the node's
** 	current data as well as new data
*/

void	btree_update_node(t_btree **node, void *new_data,
			void *(*updatef)(void **, void *))
{
	if (!node || !new_data || !updatef)
		return ;
	(*node)->item = (*updatef)(&((*node)->item), new_data);
}
