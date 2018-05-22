/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpollore <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/25 14:44:19 by jpollore          #+#    #+#             */
/*   Updated: 2018/05/22 08:31:34 by jpollore         ###   ########.fr       */
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

char		*ft_ltoa_base(long n, int base)
{
	char				*res;
	int					len;
	int					neg;
	unsigned long long	nbr;

	neg = 0;
	if ((n < 0) && (nbr = n * -1))
		neg = base == 10 ? 1 : 0;
	else
		nbr = n;
	len = 1;
	while (ft_powul(base, len) - 1 < nbr)
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
