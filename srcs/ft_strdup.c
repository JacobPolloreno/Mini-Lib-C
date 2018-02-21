/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpollore <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/19 18:48:15 by jpollore          #+#    #+#             */
/*   Updated: 2018/02/19 18:48:17 by jpollore         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strdup(char *src)
{
	char	*copy;
	int		len;

	len = 0;
	while (*(src + len))
		len++;
	copy = (char *)malloc(sizeof(*copy) * (len + 1));
	if (copy != ((void*)0))
	{
		len = 0;
		while (*(src + len))
		{
			*(copy + len) = *(src + len);
			len++;
		}
		*(copy + len) = '\0';
		return (copy);
	}
	return ((void*)0);
}
