/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpollore <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/23 17:18:04 by jpollore          #+#    #+#             */
/*   Updated: 2018/02/28 10:33:25 by jpollore         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	unsigned char	*ptr;
	unsigned char	ch;
	char			*r;

	ptr = (unsigned char *)s;
	ch = (unsigned char)c;
	if (!*s)
		return (NULL);
	while (*ptr)
	{
		if (*ptr == ch)
			r = (char *)ptr;
		ptr++;
	}
	if (*ptr == ch)
		r = (char *)ptr;
	if (r)
		return (r);
	return (NULL);
}
