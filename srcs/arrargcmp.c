/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   argmin.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpollore <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/31 14:02:19 by jpollore          #+#    #+#             */
/*   Updated: 2018/05/31 14:30:14 by jpollore         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	arrargcmp(void *arr, size_t len, size_t data_size, int (*f)(void *, void *))
{
	size_t	i;
	int		idx;

	if (!arr || !len)
		return (0);
	if (len == 2)
		return ((*f)(arr, arr + data_size * 1) ? 0 : 1);
	idx = 0;
	i = 0;
	while (i < len)
	{
		if ((*f)(arr + data_size * i, arr + data_size * idx))
			idx = i;
		i++;
	}
	return (idx);
}
