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

void	ft_strrev(char *s1)
{
	size_t	len;
	char	*head;
	char	*tail;
	char	tmp;

	if (!s1)
		return ;
	len = ft_strlen(s1);
	head = s1;
	tail = s1 + len - 1;
	while (head < tail)
	{
		tmp = *head;
		*head++ = *tail;
		*tail-- = tmp;
	}
}
