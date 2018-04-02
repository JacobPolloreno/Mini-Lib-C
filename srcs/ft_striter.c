/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpollore <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/24 15:39:09 by jpollore          #+#    #+#             */
/*   Updated: 2018/02/28 17:04:02 by jpollore         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Apply function to each character in string.
*/

void	ft_striter(char *s, void (*f)(char *))
{
	char *ptr;

	if (!s || !*s || !f)
		return ;
	ptr = s;
	while (*ptr)
		(*f)(ptr++);
}
