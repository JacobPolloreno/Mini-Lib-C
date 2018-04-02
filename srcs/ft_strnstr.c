/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpollore <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/23 18:01:55 by jpollore          #+#    #+#             */
/*   Updated: 2018/02/28 16:46:06 by jpollore         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Locate a substring in a string. Not more than len characters are searched.
*/

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	char	*hstack;
	int		i;
	int		j;

	hstack = (char*)haystack;
	if (!*needle)
		return (hstack);
	i = 0;
	j = 0;
	while (needle[j] && hstack[i] && len)
	{
		if (len && (hstack[i + j] == needle[j]))
		{
			j++;
			len--;
			continue ;
		}
		len += j;
		j = 0;
		i++;
		len--;
	}
	if (!needle[j])
		return (hstack + i);
	return ((void *)0);
}
