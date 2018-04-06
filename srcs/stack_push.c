/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_push.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpollore <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/03 14:30:08 by jpollore          #+#    #+#             */
/*   Updated: 2018/04/03 14:30:11 by jpollore         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Insert a node at the stack top
*/

int	stack_push(t_stack **top, void *data)
{
	t_stack *node;

	if ((node = (t_stack *)ft_memalloc(sizeof(*node))))
	{
		node->data = data;
		node->next = *top;
		*top = node;
		return (0);
	}
	return (1);
}
