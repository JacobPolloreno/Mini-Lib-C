/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpollore <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/24 16:03:49 by jpollore          #+#    #+#             */
/*   Updated: 2018/02/25 13:54:55 by jpollore         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmap(const char *s, char (*f)(char))
{
	size_t	size;
	size_t	len;
	char	*new;

	size = ft_strlen(s);
	new = ft_strnew(size);
	len = 0;
	while (len < size)
	{
		new[len] = (*f)(s[len]);
		len++;
	}
	new[len] = '\0';
	return (new);
}
