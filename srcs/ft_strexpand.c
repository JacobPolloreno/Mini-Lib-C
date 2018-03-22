/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strexpand.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpollore <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/22 12:37:09 by jpollore          #+#    #+#             */
/*   Updated: 2018/03/22 12:37:15 by jpollore         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strexpand(char *str, size_t expand_by)
{
	char	*dst;
	size_t	size;

	size = str ? ft_strlen(str) : 0;
	if ((dst = ft_strnew(size + expand_by)))
	{
		if (str)
		{
			ft_strcpy(dst, str);
			ft_strdel(&str);
		}
	}
	return (dst);
}
