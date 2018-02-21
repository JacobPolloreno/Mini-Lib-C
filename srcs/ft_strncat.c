/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpollore <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/19 18:57:13 by jpollore          #+#    #+#             */
/*   Updated: 2018/02/19 18:58:16 by jpollore         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, int nb)
{
	int concat_len;
	int len;

	concat_len = 0;
	while (dest[concat_len])
		concat_len++;
	len = 0;
	while (src[len] && nb--)
	{
		dest[concat_len] = src[len];
		len++;
		concat_len++;
	}
	dest[concat_len] = '\0';
	return (dest);
}
