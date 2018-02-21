/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpollore <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/21 10:43:39 by jpollore          #+#    #+#             */
/*   Updated: 2018/02/21 10:57:40 by jpollore         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	size_t	len;

	len = 0;
	while (len < n)
	{
		ft_memset(&((char *)dst)[len], ((char *)src)[len], 1);
		if (((char *)src)[len] == c)
			return (&((char *)dst)[len + sizeof(char)]);
		len += sizeof(char);
	}
	return (NULL);
}
