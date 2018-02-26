/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpollore <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/25 14:53:38 by jpollore          #+#    #+#             */
/*   Updated: 2018/02/25 15:19:05 by jpollore         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(const char *s)
{
	size_t	size;
	char	*new;
	char	*ptr;

	size = 0;
	ptr = (char *)s;
	while (*ptr)
	{
		if (!(*ptr == ' ' || *ptr == '\n' || *ptr == '\t'))
			size++;
		ptr++;
	}
	if ((new = (char *)ft_memalloc(sizeof(*new) * size + 1)))
	{
		size = 0;
		while (*s)
		{
			if (!(*s == ' ' || *s == '\n' || *s == '\t'))
				new[size++] = *s;
			s++;
		}
		new[size] = '\0';
		return (new);
	}
	return (NULL);
}
