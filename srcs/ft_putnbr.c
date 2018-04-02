/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpollore <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/15 10:01:16 by jpollore          #+#    #+#             */
/*   Updated: 2018/02/25 17:31:40 by jpollore         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Write number to standard output
*/

void	ft_putnbr(int n)
{
	long int	res;

	res = n;
	if (res < 0)
	{
		ft_putchar('-');
		res *= -1;
	}
	if (res >= 10)
	{
		ft_putnbr(res / 10);
		ft_putchar(res % 10 + '0');
	}
	if (res < 10)
		ft_putchar(res % 10 + '0');
}
