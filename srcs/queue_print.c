/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   queue_print.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpollore <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/06 11:03:50 by jpollore          #+#    #+#             */
/*   Updated: 2018/04/06 11:31:32 by jpollore         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Print queue
*/

void	queue_print(t_queue *current, void (*displayf)(void *))
{
	if (!current)
		ft_putstr("Queue is empty.\n");
	else
	{
		ft_putstr("Queue is: \n");
		while (current)
		{
			(*displayf)(current->data);
			current = current->next;
		}
		ft_putstr("NULL\n");
	}
}
