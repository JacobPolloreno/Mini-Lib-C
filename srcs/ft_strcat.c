/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpollore <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/19 18:57:20 by jpollore          #+#    #+#             */
/*   Updated: 2018/02/22 19:23:52 by jpollore         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcat(char *dst, const char *src)
{
	int concat_len;
	int len;

	concat_len = 0;
	while (dst[concat_len])
		concat_len++;
	len = 0;
	while (src[len])
	{
		dst[concat_len] = src[len];
		len++;
		concat_len++;
	}
	dst[concat_len] = '\0';
	return (dst);
}
