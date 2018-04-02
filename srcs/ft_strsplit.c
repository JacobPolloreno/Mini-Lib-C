/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpollore <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/26 12:56:34 by jpollore          #+#    #+#             */
/*   Updated: 2018/02/28 19:08:49 by jpollore         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Return list of strings. Split string at seperator haracter(c)
*/

static size_t	get_word_cnt(const char *str, char c)
{
	size_t words;
	size_t len;

	if (!*str)
		return (0);
	len = 0;
	words = 0;
	while (str[len])
	{
		if (str[len] != c)
		{
			while (str[len] && (str[len] != c))
				len++;
			words++;
		}
		else
			len++;
	}
	return (words);
}

char			**ft_strsplit(const char *str, char c)
{
	unsigned int		len;
	unsigned int		sub_len;
	char				**res;
	size_t				words;
	size_t				current_word;

	if (!str)
		return (NULL);
	words = get_word_cnt(str, c);
	if (!(res = (char **)ft_memalloc(sizeof(*res) * words + 1)))
		return (NULL);
	current_word = 0;
	len = 0;
	while (current_word < words)
	{
		while (str[len] == c)
			len++;
		sub_len = 0;
		while (str[len + sub_len] && (str[len + sub_len] != c))
			sub_len++;
		res[current_word++] = ft_strsub(str, len, sub_len);
		len += sub_len;
	}
	res[current_word] = ((void *)0);
	return (res);
}
