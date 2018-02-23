/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpollore <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/21 09:13:56 by jpollore          #+#    #+#             */
/*   Updated: 2018/02/22 16:41:08 by jpollore         ###   ########.fr       */
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

/* void	*ft_memcpy(void *dst, const void *src, size_t n) */
/* { */
/* 	size_t	len; */

/* 	len = 0; */
/* 	while (len < n) */
/* 	{ */
/* 		ft_memset(&((char *)dst)[len], ((char *)src)[len], 1); */
/* 		len += sizeof(char); */
/* 	} */
/* 	return (dst); */
/* } */

/* void	*ft_memcpy(void *dst, const void *src, size_t n) */
/* { */
/* 	int *s_word; */
/* 	int d_word; */
/* 	int *dst32; */

/* 	s_word = (int *)src; */
/* 	src++; */
/* 	dst32 = (int *)dst; */
/* 	while (n--) */
/* 	{ */
/* 		d_word = *s_word << 8; */
/* 		s_word = (int *)src; */
/* 		src++; */
/* 		d_word |= *s_word >> 24; */
/* 		*dst32 = d_word; */
/* 		dst++; */
/* 	} */
/* 	return (dst); */
/* } */
