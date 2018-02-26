/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpollore <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/26 12:56:34 by jpollore          #+#    #+#             */
/*   Updated: 2018/02/26 13:24:59 by jpollore         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "ft_list.h"

static t_list	*get_word_cnt(int *words, const char *str, const char c);
static t_list	*create_elem_length(int len);
static void		put_words(char **res, const char *str, const char c);
static int		remove_init(const char *str, const char c);

char			**ft_strsplit(const char *str, const char c)
{
	int		words;
	int		cnt;
	char	**res;
	t_list	*larr;
	t_list	*tmp;

	cnt = 0;
	words = 0;
	if (!(larr = get_word_cnt(&words, str, c)))
		return (NULL);
	res = (char **)ft_memalloc(sizeof(char*) * (words + 1));
	while (cnt < words)
	{
		res[cnt] = (char *)ft_memalloc(sizeof(char) * (*(int *)larr->data + 1));
		cnt++;
		tmp = larr;
		larr = larr->next;
		free(tmp);
	}
	put_words(res, str, c);
	res[cnt] = (char *)ft_memalloc(sizeof(char));
	res[cnt] = 0;
	return (res);
}

static t_list	*create_elem_length(int len)
{
	t_list *node;

	if ((node = (t_list *)ft_memalloc(sizeof(*node))))
	{
		node->data = &len;
		node->next = 0;
	}
	return (node);
}

static t_list	*get_word_cnt(int *words, const char *str, const char c)
{
	int		len;
	int		sub_len;
	t_list	*head;
	t_list	*cursor;

	len = remove_init(str, c);
	while (str[len] || !(str[len + 1]))
	{
		if ((!(str[len + 1] == c) && (str[len] == c)) || (len == 0))
		{
			sub_len = 0;
			while (str[++len] && !(str[len] == c))
				sub_len++;
			if ((*words)++ && (cursor->next = create_elem_length(sub_len)))
				cursor = cursor->next;
			else if ((head = create_elem_length(sub_len)))
				cursor = head;
			else
				return (NULL);
		}
		else
			len++;
	}
	return (head);
}

static int		remove_init(const char *str, const char c)
{
	int len;

	len = 0;
	while (str[len] &&
			(str[len] == c) &&
			(str[len + 1] == c))
		len++;
	return (len);
}

static void		put_words(char **res, const char *str, const char c)
{
	int	len;
	int	word;
	int	sub_len;

	len = remove_init(str, c);
	word = 0;
	while (str[len])
	{
		if (!*(str + len + 1))
			return ;
		else if ((!(str[len + 1] == c) && str[len] == c) || (len == 0))
		{
			sub_len = 0;
			if (len != 0 || str[len] == c)
				len++;
			while (str[len] && !(str[len] == c))
				*(*(res + word) + sub_len++) = *(str + len++);
			*(*(res + (word++)) + sub_len) = '\0';
		}
		else
			len++;
	}
}
