/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_startswith.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpollore <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/28 20:34:18 by jpollore          #+#    #+#             */
/*   Updated: 2018/02/28 20:42:40 by jpollore         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int			ft_str_startswith(const void *prefix, const void *s)
{
	size_t prefix_len;
	size_t str_len;

	prefix_len = ft_strlen(prefix);
	str_len = ft_strlen(s);
	return (str_len < prefix_len ? 0 : ft_strncmp(prefix, s, prefix_len) == 0);
}
