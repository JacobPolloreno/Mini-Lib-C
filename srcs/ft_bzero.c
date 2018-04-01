/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpollore <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/21 08:49:05 by jpollore          #+#    #+#             */
/*   Updated: 2018/02/21 08:55:58 by jpollore         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Write zeroes to a byte string
*/

void	ft_bzero(void *s, size_t n)
{
	ft_memset(s, 0, n);
}
