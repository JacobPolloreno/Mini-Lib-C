/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpollore <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/15 16:14:39 by jpollore          #+#    #+#             */
/*   Updated: 2018/02/28 11:27:52 by jpollore         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Locate a substring in a string.
*/

char	*ft_strstr(const char *haystack, const char *needle)
{
	char	*hstack;
	int		i;
	int		j;

	hstack = (char*)haystack;
	if (!*needle)
		return (hstack);
	i = 0;
	j = 0;
	while (needle[j] && hstack[i])
	{
		if (hstack[i + j] == needle[j])
		{
			j++;
			continue ;
		}
		j = 0;
		i++;
	}
	if (!needle[j])
		return (hstack + i);
	return ((void *)0);
}
