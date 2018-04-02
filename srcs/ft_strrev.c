/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpollore <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/28 20:11:51 by jpollore          #+#    #+#             */
/*   Updated: 2018/02/28 20:19:10 by jpollore         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Reverse a string
*/

void	ft_strrev(char *s)
{
	size_t	len;
	char	*head;
	char	*tail;
	char	tmp;

	if (!s)
		return ;
	len = ft_strlen(s);
	head = s;
	tail = s + len - 1;
	while (head < tail)
	{
		tmp = *head;
		*head++ = *tail;
		*tail-- = tmp;
	}
}
