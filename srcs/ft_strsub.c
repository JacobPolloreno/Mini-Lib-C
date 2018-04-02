/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpollore <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/25 14:05:08 by jpollore          #+#    #+#             */
/*   Updated: 2018/02/28 16:59:46 by jpollore         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Return a substring beginning form start index.
** 	behavior is undefined if start + len is not a substring
*/

char	*ft_strsub(const char *s, unsigned int start, size_t len)
{
	char	*substr;
	size_t	idx;

	if (!s || !*s)
		return (NULL);
	if ((substr = (char *)ft_memalloc(sizeof(*substr) * len + 1)))
	{
		idx = 0;
		while (idx < len)
		{
			substr[idx] = s[start + idx];
			idx++;
		}
		substr[idx] = '\0';
		return (substr);
	}
	return (NULL);
}
