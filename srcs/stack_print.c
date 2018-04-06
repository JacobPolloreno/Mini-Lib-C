/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_print.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpollore <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/03 14:29:57 by jpollore          #+#    #+#             */
/*   Updated: 2018/04/03 14:30:00 by jpollore         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Print the stack
*/

void	stack_print(t_stack **current, void (*displayf)(void *))
{
	t_stack *cursor;

	if (*current == NULL)
		ft_putstr("Stack is empty.");
	else
	{
		cursor = *current;
		while (cursor)
		{
			(*displayf)(cursor->data);
			cursor = cursor->next;
		}
	}
	ft_putchar('\n');
}
