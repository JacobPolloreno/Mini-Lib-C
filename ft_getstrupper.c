/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_getstrupper.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpollore <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/28 19:21:34 by jpollore          #+#    #+#             */
/*   Updated: 2018/02/28 20:44:21 by jpollore         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_getstrupper(char *s)
{
	char	*res;
	size_t	len;

	if ((res = (char *)ft_memalloc(sizeof(*res) * ft_strlen(s) + 1)))
	{
		len = 0;
		while (*s)
			res[len++] = ft_toupper(*s++);
		return (res);
	}
	return (NULL);
}
