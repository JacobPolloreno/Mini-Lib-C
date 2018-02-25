/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpollore <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/25 14:05:08 by jpollore          #+#    #+#             */
/*   Updated: 2018/02/25 14:11:18 by jpollore         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strsub(const char *s, unsigned int start, size_t len)
{
	char	*substr;
	size_t	idx;

	if ((substr = (char *)malloc(sizeof(*substr) * len)))
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
