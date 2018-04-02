/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strswapcase.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpollore <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/01 09:06:56 by jpollore          #+#    #+#             */
/*   Updated: 2018/03/01 09:11:02 by jpollore         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Swap case for characters in string
*/

char	*ft_strswapcase(const char *s)
{
	size_t	len;
	char	*swapped;
	char	ch;

	len = ft_strlen(s);
	if ((swapped = (char *)ft_memalloc(sizeof(*swapped) * len + 1)))
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
		swapped[len] = '\0';
		return (swapped);
	}
	return (NULL);
}
