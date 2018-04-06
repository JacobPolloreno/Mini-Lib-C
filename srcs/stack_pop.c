/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_pop.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpollore <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/03 14:29:46 by jpollore          #+#    #+#             */
/*   Updated: 2018/04/03 14:29:50 by jpollore         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Remove a node from stack top
*/

void	*stack_pop(t_stack **top)
{
	t_stack *tmp;
	void	*pop_value;

	tmp = (*top);
	pop_value = (*top)->data;
	(*top) = (*top)->next;
	free(tmp);
	return (pop_value);
}
