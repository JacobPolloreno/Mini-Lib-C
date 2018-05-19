/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsubdel.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpollore <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/19 16:35:26 by jpollore          #+#    #+#             */
/*   Updated: 2018/05/19 16:35:29 by jpollore         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Return a substring beginning form start index.
** 	behavior is undefined if start + len is not a substring
**	Assumes source string was malloc'd so it get's freed at end.
*/

char	*ft_strsubdel(char **s, unsigned int start, size_t len)
{
	char	*substr;
	size_t	idx;

	if (!s || !(*s) || !(**s))
		return (NULL);
	if ((substr = (char *)ft_memalloc(sizeof(*substr) * len + 1)))
	{
		idx = 0;
		while (idx < len)
		{
			substr[idx] = (*s)[start + idx];
			idx++;
		}
		substr[idx] = '\0';
		ft_strdel(s);
		return (substr);
	}
	return (NULL);
}
