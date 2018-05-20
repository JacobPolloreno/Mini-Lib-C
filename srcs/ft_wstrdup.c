/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_wstrdup.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpollore <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/20 07:50:13 by jpollore          #+#    #+#             */
/*   Updated: 2018/05/20 07:51:45 by jpollore         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Save a copy of a wide string
*/

wchar_t	*ft_wstrdup(const wchar_t *src)
{
	wchar_t	*copy;
	size_t	len;

	len = 0;
	if (!src)
		return (NULL);
	while (*(src + len))
		len++;
	if ((copy = ft_wstrnew(len)))
	{
		ft_memcpy(copy, src, len * 4);
		*(copy + len) = L'\0';
		return (copy);
	}
	return ((void*)0);
}
