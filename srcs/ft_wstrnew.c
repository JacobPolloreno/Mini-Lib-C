/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_wstrnew.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpollore <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/10 15:07:06 by jpollore          #+#    #+#             */
/*   Updated: 2018/05/10 15:07:12 by jpollore         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Allocate and return "fresh" wide character string.
*/

wchar_t	*ft_wstrnew(size_t size)
{
	wchar_t *new;

	if ((new = (wchar_t *)ft_memalloc(sizeof(*new) * size + 1)))
	{
		ft_memset(new, '\0', sizeof(*new) * size);
		return (new);
	}
	return (NULL);
}
