/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iarrmap.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpollore <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/28 14:51:10 by jpollore          #+#    #+#             */
/*   Updated: 2018/05/28 14:51:15 by jpollore         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	*ft_iarrmap(int *arr, size_t len, int (*f)(int))
{
	size_t	i;
	int		*map;

	if (!arr || !len || !f)
		return (arr);
	if ((map = (int *)ft_memalloc(sizeof(*map) * len)))
	{
		i = 0;
		while (i < len)
		{
			map[i] = (*f)(arr[i]);
			i++;
		}
	}
	return (map);
}
