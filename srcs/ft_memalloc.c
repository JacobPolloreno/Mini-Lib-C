/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmalloc.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpollore <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/24 10:31:39 by jpollore          #+#    #+#             */
/*   Updated: 2018/02/24 10:45:33 by jpollore         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Allocates memory with malloc then runs zeroes out the memory allocated
*/

void	*ft_memalloc(size_t size)
{
	void	*buf;

	if ((buf = (void *)malloc(size)))
	{
		ft_bzero(buf, size);
		return (buf);
	}
	return (NULL);
}
