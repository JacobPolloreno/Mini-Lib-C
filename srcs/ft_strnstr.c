/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpollore <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/23 18:01:55 by jpollore          #+#    #+#             */
/*   Updated: 2018/02/23 18:18:06 by jpollore         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	int		reset_len;
	char	*hstack;

	reset_len = 0;
	hstack = (char *)haystack;
	if (!*needle)
		return (hstack);
	while (*needle && len)
	{
		if (!*hstack)
			break ;
		else if (*hstack == *needle && reset_len++ && needle++)
			;
		else if (reset_len)
		{
			needle = needle - reset_len;
			reset_len = 0;
		}
		hstack++;
		len--;
	}
	if (reset_len && !*needle)
		return (hstack - reset_len);
	return ((void *)0);
}
