/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpollore <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/25 14:44:19 by jpollore          #+#    #+#             */
/*   Updated: 2018/04/26 15:40:03 by jpollore         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Convert number in base ASCII decimal-digit string
*/

static char	digit_to_char(int nb)
{
	if (nb >= 10)
		return (nb - 10 + 'a');
	else
		return (nb + '0');
}

char		*ft_itoa_base(long n, int base)
{
	char		*res;
	int			len;
	int			neg;
	long long	nbr;

	neg = 0;
	if (((nbr = (long long)n) < 0) && (nbr *= -1))
	{
		if (base == 10)
			neg = 1;
	}
	len = 1;
	while (ft_powl(base, len) - 1 < nbr)
		len++;
	if (!(res = (char *)ft_memalloc(sizeof(*res) * ++len + neg)))
		return (NULL);
	res[--len + neg] = '\0';
	while (len-- > 0)
	{
		res[len + neg] = digit_to_char(nbr % base);
		nbr /= base;
	}
	if (neg)
		res[0] = '-';
	return (res);
}
