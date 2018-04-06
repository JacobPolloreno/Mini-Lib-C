/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dequeue.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpollore <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/06 11:04:31 by jpollore          #+#    #+#             */
/*   Updated: 2018/04/06 11:26:15 by jpollore         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Remove node from queue head
*/

void	*dequeue(t_queue **head, t_queue **tail)
{
	t_queue	*tmp;
	void	*value;

	value = (*head)->data;
	tmp = *head;
	*head = (*head)->next;
	if (*head == NULL)
		*tail = NULL;
	free(tmp);
	return (value);
}
