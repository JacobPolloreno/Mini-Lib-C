/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   enqueue.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpollore <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/06 11:03:34 by jpollore          #+#    #+#             */
/*   Updated: 2018/04/06 11:27:30 by jpollore         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Insert a node at queue tail
*/

int	enqueue(t_queue **head, t_queue **tail, void *data)
{
	t_queue *node;

	if ((node = (t_queue *)ft_memalloc(sizeof(*node))))
	{
		node->data = data;
		node->next = NULL;
		if (queue_isempty(head))
			*head = node;
		else
			(*tail)->next = node;
		(*tail) = node;
		return (0);
	}
	return (1);
}
