/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpollore <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/21 09:13:56 by jpollore          #+#    #+#             */
/*   Updated: 2018/02/22 17:55:14 by jpollore         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	char *dst_s;
	char *src_s;

	dst_s = (char *)dst;
	src_s = (char *)src;
	while (n--)
		*dst_s++ = *src_s++;
	return (dst);
}
