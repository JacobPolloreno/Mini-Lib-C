/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchri.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpollore <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/25 14:43:53 by jpollore          #+#    #+#             */
/*   Updated: 2018/04/25 14:43:57 by jpollore         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Locate character in string starting from i
*/

char	*ft_strchri(const char *s, int find, unsigned int start)
{
	char *ptr;

	if (ft_strlen(s) < start)
		return (NULL);
	ptr = (char *)s;
	ptr += start;
	while (*ptr)
	{
		if (*ptr == find)
			return (ptr);
		ptr++;
	}
	if (find == '\0')
		return (ptr);
	return (NULL);
}
