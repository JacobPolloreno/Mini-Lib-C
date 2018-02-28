/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpollore <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/24 19:52:56 by jpollore          #+#    #+#             */
/*   Updated: 2018/02/28 10:46:32 by jpollore         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(const char *s, char (*f)(unsigned int, char))
{
	size_t	size;
	size_t	len;
	char	*new;

	size = ft_strlen(s);
	if (!(new = ft_strnew(size)))
		return (NULL);
	len = 0;
	while (len < size)
	{
		new[len] = (*f)(len, s[len]);
		len++;
	}
	new[len] = '\0';
	return (new);
}
