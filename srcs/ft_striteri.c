/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpollore <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/24 15:51:06 by jpollore          #+#    #+#             */
/*   Updated: 2018/02/28 17:04:43 by jpollore         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Apply function to each character in string.
** 	up to n characters
*/

void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	unsigned int len;

	len = 0;
	if (!s || !*s || !f)
		return ;
	while (s[len])
	{
		(*f)(len, &(s[len]));
		len++;
	}
}
