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
** Allocates and returns a "fresh" null-terminated concatenated string
**  of prefix and suffix strings. Prefix and suffix are assumed to be
**  malloc'd strings that are thus freed after joining.
*/

char	*ft_strjoindel(char *prefix, char *suffix)
{
	char	*concat;
	size_t	concat_size;
	size_t	tmp;

	if (!prefix || !suffix)
		return (NULL);
	concat_size = ft_strlen(prefix) + ft_strlen(suffix);
	if ((concat = (char *)ft_memalloc(sizeof(*concat) * concat_size + 1)))
	{
		tmp = 0;
		while (prefix[tmp])
			*concat++ = prefix[tmp++];
		tmp = 0;
		while (suffix[tmp])
			*concat++ = suffix[tmp++];
		*concat = '\0';
		ft_strdel(&prefix);
		ft_strdel(&suffix);
		return (concat - concat_size);
	}
	return (NULL);
}
