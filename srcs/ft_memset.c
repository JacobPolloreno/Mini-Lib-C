/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpollore <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/19 19:30:43 by jpollore          #+#    #+#             */
/*   Updated: 2018/02/21 15:32:15 by jpollore         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void	*ft_memset(void *b, int c, size_t n)
{
	char			*ptr_c;
	char			value_c;
	unsigned int	*ptr_w;
	unsigned int	value_w;
	size_t			tail;

	value_c = c & 0xff;
	value_w = c & 0xff;
	value_w |= value_w << 8;
	value_w |= value_w << 16;
	ptr_c = (char *)b;
	while (((unsigned int)ptr_c & 3) && n)
	{
		*ptr_c++ = value_c;
		n--;
	}
	ptr_w = (unsigned int *)ptr_c;
	tail = n & 3;
	n >>= 2;
	while (n)
	{
		*ptr_w++ = value_w;
		n--;
	}
	ptr_c = (char *)ptr_w;
	while (tail--)
		*ptr_c++ = value_c;
	return (b);
}
