/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpollore <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/25 14:53:38 by jpollore          #+#    #+#             */
/*   Updated: 2018/02/28 17:02:16 by jpollore         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(const char *s)
{
	size_t	size;
	char	*new;
	char	*head;
	char	*tail;

	head = (char *)s;
	if (!s)
		return (NULL);
	while (*head && (*head == ' ' || *head == '\n' || *head == '\t'))
		head++;
	tail = head;
	while (*(tail + 1))
		tail++;
	while (*tail && (*tail == ' ' || *tail == '\n' || *tail == '\t'))
		tail--;
	if ((new = (char *)ft_memalloc(sizeof(*new) * (++tail - head) + 1)))
	{
		size = 0;
		while (head < tail)
			new[size++] = *(head)++;
		new[size] = '\0';
		return (new);
	}
	return (NULL);
}
