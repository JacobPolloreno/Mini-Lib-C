/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree_update_node.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpollore <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/20 15:39:00 by jpollore          #+#    #+#             */
/*   Updated: 2018/03/20 17:15:30 by jpollore         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	btree_update_node(t_btree **node, void *new_data, void *(*updatef)(void **, void *))
{
	if (!node || !new_data || !updatef)
		return ;
	(*node)->item = (*updatef)(&((*node)->item), new_data);
}
