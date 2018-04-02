/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpollore <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/25 15:40:09 by jpollore          #+#    #+#             */
/*   Updated: 2018/02/25 15:42:20 by jpollore         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Write a string to standard output
*/

void	ft_putstr(const char *s)
{
	char *ptr;

	ptr = (char *)s;
	while (*ptr)
		write(1, ptr++, 1);
}
