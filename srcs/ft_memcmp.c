/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpollore <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/21 22:06:15 by jpollore          #+#    #+#             */
/*   Updated: 2018/02/22 10:50:56 by jpollore         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char uch1;
	unsigned char uch2;

	while (n--)
	{
		uch1 = *(unsigned char *)s1;
		uch2 = *(unsigned char *)s2;
		if (uch1 != uch2)
			return (uch1 < uch2 ? -1 : 1);
		s1++;
		s2++;
	}
	return (0);
}
