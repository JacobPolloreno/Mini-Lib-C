/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpollore <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/23 17:18:04 by jpollore          #+#    #+#             */
/*   Updated: 2018/02/23 17:27:42 by jpollore         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char *ptr;
	char *ch;

	ptr = (char *)s;
	while (*ptr)
	{
		if (*ptr == c)
			ch = ptr;
		ptr++;
	}
	if (ch)
		return (ch);
	return (NULL);
}
