/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   queue_iter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpollore <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/06 11:18:47 by jpollore          #+#    #+#             */
/*   Updated: 2018/04/06 11:30:16 by jpollore         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Apply functio to each element of the queue
*/

void	queue_iter(t_queue *current, void (*applyf)(void *))
{
	if (!current)
		return ;
	while (current)
	{
		(*applyf)(current->data);
		current = current->next;
	}
}
