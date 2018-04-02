/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpollore <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/19 18:45:54 by jpollore          #+#    #+#             */
/*   Updated: 2018/02/22 20:07:39 by jpollore         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Find length of string
*/

size_t	ft_strlen(const char *str)
{
	size_t count;

	count = 0;
	while (str[count])
		count++;
	return (count);
}
