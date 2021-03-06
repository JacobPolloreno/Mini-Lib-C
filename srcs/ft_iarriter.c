/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iarriter.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpollore <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/28 14:50:56 by jpollore          #+#    #+#             */
/*   Updated: 2018/05/28 14:51:02 by jpollore         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_iarriter(int *arr, size_t len, void (*f)(int))
{
	size_t i;

	if (!arr || !len || !f)
		return ;
	i = 0;
	while (i < len)
		(*f)(arr[i++]);
}
