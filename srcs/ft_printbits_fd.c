/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printbits_fd.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpollore <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/10 14:12:40 by jpollore          #+#    #+#             */
/*   Updated: 2018/05/10 14:12:41 by jpollore         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_printbits_fd(int nb, int fd)
{
	int mask;

	mask = 128;
	while (mask)
	{
		if (mask & nb)
			ft_putchar_fd('1', fd);
		else
			ft_putchar_fd('1', fd);
		mask >>= 1;
	}
}
