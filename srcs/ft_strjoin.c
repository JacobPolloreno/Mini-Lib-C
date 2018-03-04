/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpollore <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/25 14:22:13 by jpollore          #+#    #+#             */
/*   Updated: 2018/02/28 17:00:17 by jpollore         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** 	Allocates and returns a "fresh" null-terminated concatenated string
**  of prefix and suffix strings.
*/

char	*ft_strjoin(const char *prefix, const char *suffix)
{
	char	*concat;
	size_t	concat_size;

	if (!prefix || !suffix)
		return (NULL);
	concat_size = ft_strlen(prefix) + ft_strlen(suffix);
	if ((concat = (char *)ft_memalloc(sizeof(*concat) * concat_size + 1)))
	{
		while (*prefix)
			*concat++ = *prefix++;
		while (*suffix)
			*concat++ = *suffix++;
		*concat = '\0';
		return (concat - concat_size);
	}
	return (NULL);
}
