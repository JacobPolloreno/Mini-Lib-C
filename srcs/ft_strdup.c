/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpollore <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/19 18:48:15 by jpollore          #+#    #+#             */
/*   Updated: 2018/02/22 11:26:19 by jpollore         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_strdup(const char *src)
{
	char	*copy;
	int		len;

	len = 0;
	while (*(src + len))
		len++;
	copy = (char *)malloc(sizeof(*copy) * (len + 1));
	if (copy)
	{
		ft_memcpy(copy, src, len);
		*(copy + len) = '\0';
		return (copy);
	}
	return ((void*)0);
}
