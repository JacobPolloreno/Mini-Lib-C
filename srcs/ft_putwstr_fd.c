/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putwstr_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpollore <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/10 14:11:50 by jpollore          #+#    #+#             */
/*   Updated: 2018/05/10 14:12:04 by jpollore         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putwstr_fd(const wchar_t *str, int fd)
{
	wchar_t *ptr;
	size_t len;

	if (!str || !*str)
		return ;
	ptr = (wchar_t *)str;
	len = 0;
	while (ptr[len])
		ft_putwchar_fd(ptr[len++], fd);
}
