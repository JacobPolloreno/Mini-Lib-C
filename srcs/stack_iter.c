/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_iter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpollore <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/03 14:29:20 by jpollore          #+#    #+#             */
/*   Updated: 2018/04/03 14:29:27 by jpollore         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Apply function to each element of stack
*/

void	stack_iter(t_stack **current, void (*applyf)(void *))
{
	t_stack *cursor;

	if (!*current)
		return ;
	cursor = *current;
	while (cursor)
	{
		(*applyf)(cursor->data);
		cursor = cursor->next;
	}
}
