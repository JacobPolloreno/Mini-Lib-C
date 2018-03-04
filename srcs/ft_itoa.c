/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpollore <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/26 13:31:45 by jpollore          #+#    #+#             */
/*   Updated: 2018/02/28 19:06:23 by jpollore         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char		*handle_zero(void)
{
	char *res;

	if ((res = (char *)ft_memalloc(sizeof(*res) + 1)))
	{
		res[0] = '0';
		res[1] = '\0';
	}
	return (res);
}

static t_dlist	*create_elem_ch(char ch)
{
	t_dlist *node;

	if ((node = (t_dlist *)ft_memalloc(sizeof(*node))))
	{
		node->content = (void *)ft_memalloc(sizeof(char));
		*((char *)node->content) = ch;
		node->content_size = sizeof(char);
		node->next = 0;
		node->prev = 0;
	}
	return (node);
}

static t_dlist	*get_digits(long nb, size_t *len)
{
	t_dlist	*head;
	t_dlist *tail;

	while (nb)
	{
		if (((*len)++) && (tail->next = create_elem_ch('0' + (nb % 10))))
		{
			tail->next->prev = tail;
			tail = tail->next;
		}
		else if ((head = create_elem_ch('0' + (nb % 10))))
			tail = head;
		else
			return (NULL);
		nb /= 10;
	}
	return (tail);
}

static void		free_dlist(t_dlist *head)
{
	t_dlist	*prev;

	while (head)
	{
		prev = head;
		head = head->next;
		free(prev);
	}
}

char			*ft_itoa(int n)
{
	char	*res;
	int		sign;
	size_t	len;
	t_dlist *tail;

	if (n == 0 && (res = handle_zero()))
		return (res);
	sign = (n < 0) ? -1 : 1;
	len = 0;
	tail = get_digits((long)n * sign, &len);
	len = sign > 0 ? len + 1 : len + 2;
	if (!(res = (char *)ft_memalloc(sizeof(*res) * len)))
		return (NULL);
	len = 0;
	while (tail)
	{
		if (sign < 0 && !len)
			res[len++] = '-';
		res[len++] = *(char *)tail->content;
		tail = tail->prev;
	}
	res[len] = '\0';
	free_dlist(tail);
	return (res);
}
