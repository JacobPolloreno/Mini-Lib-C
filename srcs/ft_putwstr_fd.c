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

void	ft_putwstr_fd(const t_char32 *str, int fd)
{
	t_char32 *ptr;

	ptr = (t_char32 *)str;
	while (*ptr)
		ft_putwchar_fd((*ptr)++, fd);
}
