/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_endswith.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpollore <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/01 08:34:17 by jpollore          #+#    #+#             */
/*   Updated: 2018/03/01 08:47:01 by jpollore         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int			ft_str_endswith(const void *suffix, const void *s)
{
	char	*sf;
	char	*str;

	sf = ft_strdup((char *)suffix);
	str = ft_strdup((char *)s);
	ft_strrev(sf);
	ft_strrev(str);
	return (ft_str_startswith(sf, str));
}
