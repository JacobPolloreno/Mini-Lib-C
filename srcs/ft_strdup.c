/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpollore <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/19 18:48:15 by jpollore          #+#    #+#             */
/*   Updated: 2018/02/22 19:24:57 by jpollore         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Save a copy of a string
*/

char	*ft_strdup(const char *src)
{
	char	*copy;
	int		len;

	len = 0;
	if (!src)
		return (NULL);
	while (*(src + len))
		len++;
	copy = (char *)ft_memalloc(sizeof(*copy) * (len + 1));
	if (copy)
	{
		ft_memcpy(copy, src, len);
		*(copy + len) = '\0';
		return (copy);
	}
	return ((void*)0);
}
