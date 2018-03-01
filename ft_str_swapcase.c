/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_swapcase.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpollore <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/01 08:49:26 by jpollore          #+#    #+#             */
/*   Updated: 2018/03/01 08:53:47 by jpollore         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_swapcase(const char *s)
{
	size_t	len;
	char	*swapped;
	char	ch;

	len = ft_strlen(s);
	if ((swapped = (char *)ft_memalloc(sizeof(*swapped) * len)))
	{
		len = 0;
		while (s[len])
		{
			ch = s[len];
			if ((ch >= 'A' && ch <= 'Z'))
				ch = ch + 32;
			else if ((ch >= 'a' && ch <= 'z'))
				ch = ch - 32;
			swapped[len++] = ch;
		}
		return (swapped);
	}
	return (NULL);
}
