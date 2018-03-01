/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpollore <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/19 18:57:13 by jpollore          #+#    #+#             */
/*   Updated: 2018/02/22 22:21:47 by jpollore         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncat(char *dst, const char *src, size_t n)
{
	int concat_len;
	int len;

	concat_len = 0;
	while (dst[concat_len])
		concat_len++;
	len = 0;
	while (src[len] && n--)
	{
		dst[concat_len] = src[len];
		len++;
		concat_len++;
	}
	dst[concat_len] = '\0';
	return (dst);
}
