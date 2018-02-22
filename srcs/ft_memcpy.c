/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpollore <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/21 09:13:56 by jpollore          #+#    #+#             */
/*   Updated: 2018/02/21 14:57:58 by jpollore         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t	len;

	len = 0;
	while (len < n)
	{
		ft_memset(&((char *)dst)[len], ((char *)src)[len], 1);
		len += sizeof(char);
	}
	return (dst);
}
