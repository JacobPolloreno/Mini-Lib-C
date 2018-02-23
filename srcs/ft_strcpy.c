/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpollore <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/19 18:33:21 by jpollore          #+#    #+#             */
/*   Updated: 2018/02/22 17:46:30 by jpollore         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* char	*ft_strcpy(char *dest, char *src) */
/* { */
/* 	int len; */

/* 	len = 0; */
/* 	while (src[len]) */
/* 	{ */
/* 		dest[len] = src[len]; */
/* 		len++; */
/* 	} */
/* 	dest[len] = '\0'; */
/* 	return (dest); */
/* } */

char *ft_strcpy(char *dest, char *src)
{
	int len;

	len = ft_strlen(src);
	ft_memcpy(dest, src, len);
	dest[++len] = '\0';
	return (dest);
}
