/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tarrappend.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpollore <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/28 15:41:52 by jpollore          #+#    #+#             */
/*   Updated: 2018/05/28 15:47:26 by jpollore         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_tuple	*ft_tarrappend(t_tuple *arr, size_t len, t_tuple data)
{
	t_tuple	*new;
	size_t	i;

	if ((new = (t_tuple *)ft_memalloc(sizeof(*new) * len + 1)))
	{
		i = 0;
		while (i < len)
		{
			new[i] = arr[i];
			i++;
		}
		new[i] = data;
	}
	return (new);
}
