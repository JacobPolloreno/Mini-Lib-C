/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpollore <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/21 16:08:16 by jpollore          #+#    #+#             */
/*   Updated: 2018/02/21 16:51:34 by jpollore         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char *buffer;

	buffer = (char *)malloc(sizeof(*buffer) * len);
	ft_memcpy(buffer, src, len);
	ft_memcpy(dst, buffer, len);
	return (dst);
}
