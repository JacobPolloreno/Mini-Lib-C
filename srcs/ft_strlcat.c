/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpollore <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/22 20:40:22 by jpollore          #+#    #+#             */
/*   Updated: 2018/02/27 20:26:46 by jpollore         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Size-bounded string concatenation
*/

static void		concat(char **dst, char **src, size_t len)
{
	while (**src)
	{
		if (len != 1)
		{
			**dst = **src;
			*dst = *dst + 1;
			len--;
		}
		*src = *src + 1;
	}
}

size_t			ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	char	*src_ptr;
	char	*dst_ptr;
	int		dst_len;
	size_t	len;

	dst_ptr = dst;
	src_ptr = (char *)src;
	len = dstsize;
	while (len-- && *dst_ptr)
		dst_ptr++;
	dst_len = dst_ptr - dst;
	len = dstsize - dst_len;
	if (len == 0)
		return (dst_len + ft_strlen(src));
	concat(&dst_ptr, &src_ptr, len);
	*dst_ptr = '\0';
	return (dst_len + (src_ptr - src));
}
