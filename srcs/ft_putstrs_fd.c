/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstrs_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpollore <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/13 15:27:17 by jpollore          #+#    #+#             */
/*   Updated: 2018/03/13 15:28:44 by jpollore         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putstrs_fd(const char **strs, int fd)
{
	char **ptr;
	size_t idx;

	if (!strs)
		return ;
	ptr = (char **)strs;
	idx = 0;
	while (ptr[idx])
	{
		ft_putstr_fd(ptr[idx++], fd);
		ft_putchar_fd('\n', fd);
	}
}
