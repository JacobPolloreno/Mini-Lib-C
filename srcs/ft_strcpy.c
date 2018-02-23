/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpollore <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/19 18:33:21 by jpollore          #+#    #+#             */
/*   Updated: 2018/02/22 19:33:02 by jpollore         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strcpy(char *dst, const char *src)
{
	int len;

	len = ft_strlen(src);
	ft_memcpy(dst, src, len);
	dst[++len] = '\0';
	return (dst);
}
