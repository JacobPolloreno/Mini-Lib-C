/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iarrappend.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpollore <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/28 15:36:07 by jpollore          #+#    #+#             */
/*   Updated: 2018/05/28 15:39:54 by jpollore         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	*ft_iarrappend(int *arr, size_t len, int data)
{
	int		*new;
	size_t	i;

	if ((new = (int *)ft_memalloc(sizeof(*new) * len + 1)))
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
