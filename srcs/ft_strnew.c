/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpollore <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/24 14:58:16 by jpollore          #+#    #+#             */
/*   Updated: 2018/02/24 15:15:51 by jpollore         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnew(size_t size)
{
	char *new;

	if ((new = (char *)malloc(sizeof(*new) * size)))
	{
		ft_memset(new, '\0', size);
		return (new);
	}
	return (NULL);
}
