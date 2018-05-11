/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_getwchar.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpollore <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/10 15:07:18 by jpollore          #+#    #+#             */
/*   Updated: 2018/05/10 15:09:46 by jpollore         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Convert wide 32 bit character to utf8 character codes
*/

static void	conv_wchar_to_utf8(const wchar_t ch, char *str)
{
	size_t	len;

	len = 0;
	if (ch < (1 << 7))
		str[len++] = ch;
	else if (ch < (1 << 11))
	{
		str[len++] = ((ch >> 6) | 0xC0);
		str[len++] = ((ch & 0x3F) | 0x80);
	}
	else if (ch < (1 << 16))
	{
		str[len++] = ((ch >> 12) | 0xE0);
		str[len++] = (((ch >> 6) & 0x3F) | 0x80);
		str[len++] = ((ch & 0x3F) | 0x80);
	}
	else if (ch < (1 << 21))
	{
		str[len++] = ((ch >> 18) | 0xF0);
		str[len++] = (((ch >> 12) & 0x3F) | 0x80);
		str[len++] = (((ch >> 6) & 0x3F) | 0x80);
		str[len++] = ((ch & 0x3F) | 0x80);
	}
	str[len] = '\0';
}

char		*ft_getwchar(const wchar_t ch)
{
	char *str;

	if ((str = ft_strnew(4)))
		conv_wchar_to_utf8(ch, str);
	return (str);
}
