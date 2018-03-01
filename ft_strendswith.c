/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strendswith.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpollore <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/01 09:07:10 by jpollore          #+#    #+#             */
/*   Updated: 2018/03/01 09:07:20 by jpollore         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int			ft_strendswith(const void *suffix, const void *s)
{
	char	*sf;
	char	*str;

	sf = ft_strdup((char *)suffix);
	str = ft_strdup((char *)s);
	ft_strrev(sf);
	ft_strrev(str);
	return (ft_strstartswith(sf, str));
}
