/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpollore <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/25 17:52:34 by jpollore          #+#    #+#             */
/*   Updated: 2018/02/25 17:56:39 by jpollore         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Write number to file descriptor
*/

void	ft_putnbr_fd(int n, int fd)
{
	long int	res;

	res = n;
	if (res < 0)
	{
		ft_putchar_fd('-', fd);
		res *= -1;
	}
	if (res >= 10)
	{
		ft_putnbr_fd(res / 10, fd);
		ft_putchar_fd(res % 10 + '0', fd);
	}
	if (res < 10)
		ft_putchar_fd(res % 10 + '0', fd);
}
