/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_wstrlen.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpollore <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/20 07:01:26 by jpollore          #+#    #+#             */
/*   Updated: 2018/05/20 07:05:54 by jpollore         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Find length of wide string
*/

size_t	ft_wstrlen(const wchar_t *str)
{
	size_t count;

	count = 0;
	if (!str)
		return (0);
	while (str[count])
		count++;
	return (count);
}
