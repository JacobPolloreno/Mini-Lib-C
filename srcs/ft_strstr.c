/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpollore <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/15 16:14:39 by jpollore          #+#    #+#             */
/*   Updated: 2018/02/23 22:08:48 by jpollore         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(const char *haystack, const char *needle)
{
	int		reset_len;
	char	*hstack;

	reset_len = 0;
	hstack = (char *)haystack;
	if (!*needle)
		return (hstack);
	while (needle[reset_len])
	{
		if (!*hstack)
			break ;
		else if (*hstack == needle[reset_len])
			reset_len++;
		else if (reset_len)
			reset_len = 0;
		hstack++;
	}
	if (reset_len && !needle[reset_len])
		return (hstack - reset_len);
	return ((void *)0);
}
