/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split_whitespaces.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpollore <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/18 11:29:22 by jpollore          #+#    #+#             */
/*   Updated: 2018/02/25 15:35:51 by jpollore         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	get_word_count(int *words, int **lengths, const char *str);
static void	put_words(char **res, const char *str);
static int	remove_init(const char *str);

char	**ft_strsplit(const char *str, char c)
{
	int		words;
	int		count;
	int		*lengths;
	char	**res;

	count = 0;
	words = 0;
	lengths = (int *)malloc(sizeof(int) * 1024);
	get_word_count(&words, &lengths, str);
	res = (char **)malloc(sizeof(char*) * (words + 1));
	while (count < words)
	{
		res[count] = (char *)malloc(sizeof(char) * (lengths[count] + 1));
		count++;
	}
	put_words(res, str);
	res[count] = (char *)malloc(sizeof(char));
	res[count] = 0;
	return (res);
}

static void	get_word_count(int *words, int **lengths, const char *str)
{
	int len;
	int sub_len;

	len = remove_init(str);
	while (*(str + len))
	{
		if (*(str + len + 1) == '\0')
			return ;
		else if ((!(is_sep(str[len + 1])) && (is_sep(str[len]))) || (len == 0))
		{
			sub_len = 0;
			len++;
			while (*(str + len) && !(is_sep(*(str + len))))
			{
				len++;
				sub_len++;
			}
			(*lengths)[*words] = sub_len;
			(*words)++;
		}
		else
			len++;
	}
}

static int	remove_init(const char *str)
{
	int len;

	len = 0;
	while (*(str + len) && (is_sep(*(str + len))) &&
		(is_sep(*(str + len + 1))))
		len++;
	return (len);
}

static void	put_words(char **res, const char *str)
{
	int	len;
	int	word;
	int	sub_len;

	len = remove_init(str);
	word = 0;
	while (*(str + len))
	{
		if (*(str + len + 1) == '\0')
			return ;
		else if ((!(is_sep(str[len + 1])) && (is_sep(str[len]))) || (len == 0))
		{
			sub_len = 0;
			if (len != 0 || is_sep(*(str + len)))
				len++;
			while (*(str + len) && !(is_sep(*(str + len))))
				*(*(res + word) + sub_len++) = *(str + len++);
			*(*(res + (word++)) + sub_len) = '\0';
		}
		else
			len++;
	}
}
