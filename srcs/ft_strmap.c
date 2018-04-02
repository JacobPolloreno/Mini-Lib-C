/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpollore <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/24 16:03:49 by jpollore          #+#    #+#             */
/*   Updated: 2018/02/28 17:17:34 by jpollore         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Apply function to each character in string and return new string
*/

char	*ft_strmap(const char *s, char (*f)(char))
{
	size_t	size;
	size_t	len;
	char	*new;

	if (!s || !*s || !f)
		return (NULL);
	size = ft_strlen(s);
	if (!(new = ft_strnew(size)))
		return (NULL);
	len = 0;
	while (len < size)
	{
		new[len] = (*f)(s[len]);
		len++;
	}
	new[len] = '\0';
	return (new);
}
