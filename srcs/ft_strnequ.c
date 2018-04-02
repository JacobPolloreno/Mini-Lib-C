/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnequ.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpollore <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/25 13:57:27 by jpollore          #+#    #+#             */
/*   Updated: 2018/02/28 17:06:00 by jpollore         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Test if two strings are equal. Test at most n characters
*/

int	ft_strnequ(const char *s1, const char *s2, size_t n)
{
	if (!s1 || !s2)
		return (1);
	while (*s1 && *s2 && n)
	{
		if (*s1++ != *s2++)
			return (0);
		n--;
	}
	if (!n)
		return (1);
	if (*s1 || *s2)
		return (0);
	return (1);
}
