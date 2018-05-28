/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tarriter.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpollore <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/28 15:43:05 by jpollore          #+#    #+#             */
/*   Updated: 2018/05/28 15:43:24 by jpollore         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_tarriter(t_tuple *arr, size_t len, void (*f)(t_tuple))
{
	size_t i;

	if (!arr || !len || !f)
		return ;
	i = 0;
	while (i < len)
		(*f)(arr[i++]);
}
