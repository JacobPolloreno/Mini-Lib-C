/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstartswith.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpollore <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/01 09:07:30 by jpollore          #+#    #+#             */
/*   Updated: 2018/03/01 09:07:38 by jpollore         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int			ft_strstartswith(const void *prefix, const void *s)
{
	size_t prefix_len;
	size_t str_len;

	prefix_len = ft_strlen(prefix);
	str_len = ft_strlen(s);
	return (str_len < prefix_len ? 0 : ft_strncmp(prefix, s, prefix_len) == 0);
}
