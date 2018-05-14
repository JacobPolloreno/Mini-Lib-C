/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_uitoa_base.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpollore <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/25 14:44:19 by jpollore          #+#    #+#             */
/*   Updated: 2018/04/26 15:40:03 by jpollore         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Convert unsigned integer ASCII decimal-digit string in base
*/

static char	digit_to_char(int nb)
{
	if (nb >= 10)
		return (nb - 10 + 'a');
	else
		return (nb + '0');
}

char		*ft_uitoa_base(unsigned long n, int base)
{
	char		*res;
	int		len;

	len = 1;
	while (ft_powul(base, len) - 1 < n)
		len++;
	if (!(res = (char *)ft_memalloc(sizeof(*res) * ++len)))
		return (NULL);
	res[--len] = '\0';
	while (len-- > 0)
	{
		res[len] = digit_to_char(n % base);
		n /= base;
	}
	return (res);
}
