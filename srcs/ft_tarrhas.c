/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tarrhas.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpollore <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/30 10:25:27 by jpollore          #+#    #+#             */
/*   Updated: 2018/05/30 10:40:09 by jpollore         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_tarrhas(t_tuple *arr, size_t len, t_tuple data,
			int (*f)(t_tuple, t_tuple))
{
	size_t	i;

	if (!arr || !len)
		return (0);
	i = 0;
	while (i < len)
	{
		if ((*f)(arr[i], data))
			return (1);
		i++;
	}
	return (0);
}
