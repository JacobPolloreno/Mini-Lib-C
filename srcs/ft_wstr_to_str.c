/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_wstr_to_str.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpollore <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/20 08:06:23 by jpollore          #+#    #+#             */
/*   Updated: 2018/05/20 08:06:31 by jpollore         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_wstr_to_str(const wchar_t *wstr)
{
	char	*str;
	char	*tmp_wchar;
	size_t	wlen;

	if (!wstr)
		return (NULL);
	wlen = 0;
	str = ft_strnew(0);
	while (wstr[wlen])
	{
		tmp_wchar = ft_getwchar(wstr[wlen++]);
		str = ft_strjoindel(&str, &tmp_wchar);
	}
	return (str);
}
