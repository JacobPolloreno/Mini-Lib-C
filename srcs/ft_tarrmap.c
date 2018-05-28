/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tarrmap.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpollore <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/28 15:43:54 by jpollore          #+#    #+#             */
/*   Updated: 2018/05/28 15:45:59 by jpollore         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_tuple	*ft_tarrmap(t_tuple *arr, size_t len, t_tuple (*f)(t_tuple))
{
	size_t	i;
	t_tuple	*map;

	if (!arr || !len || !f)
		return (arr);
	if ((map = (t_tuple *)ft_memalloc(sizeof(*map) * len)))
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
