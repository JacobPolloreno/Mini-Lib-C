/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iarrhas.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpollore <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/01 12:18:27 by jpollore          #+#    #+#             */
/*   Updated: 2018/06/01 12:18:36 by jpollore         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_iarrhas(int *arr, size_t len, int data)
{
	size_t	i;

	if (!arr || !len)
		return (0);
	i = 0;
	while (i < len)
	{
		if (data == arr[i])
			return (1);
		i++;
	}
	return (0);
}
