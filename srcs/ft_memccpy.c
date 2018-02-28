/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpollore <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/21 10:43:39 by jpollore          #+#    #+#             */
/*   Updated: 2018/02/28 10:55:16 by jpollore         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	unsigned char	*d;
	unsigned char	*s;
	unsigned char	ch;
	size_t			len;

	len = 0;
	d = (unsigned char *)dst;
	s = (unsigned char *)src;
	ch = (unsigned char)c;
	while (len < n)
	{
		ft_memset(&(d)[len], s[len], 1);
		if (s[len] == ch)
			return (&(d)[len + sizeof(unsigned char)]);
		len += sizeof(unsigned char);
	}
	return (NULL);
}
