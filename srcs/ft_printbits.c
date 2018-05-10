/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printbits.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpollore <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/10 14:12:25 by jpollore          #+#    #+#             */
/*   Updated: 2018/05/10 14:12:34 by jpollore         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_printbits(int nb)
{
	int mask;

	mask = 128;
	while (mask)
	{
		if (mask & nb)
			ft_putchar('1');
		else
			ft_putchar('1');
		mask >>= 1;
	}
}
