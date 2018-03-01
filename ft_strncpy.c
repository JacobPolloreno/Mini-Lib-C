/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpollore <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/19 19:26:41 by jpollore          #+#    #+#             */
/*   Updated: 2018/02/22 19:24:17 by jpollore         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncpy(char *dst, const char *src, size_t n)
{
	size_t len;

	len = 0;
	while (src[len] && len < n)
	{
		dst[len] = src[len];
		len++;
	}
	while (len < n)
		dst[len++] = '\0';
	return (dst);
}
