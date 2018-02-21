/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpollore <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/19 18:57:20 by jpollore          #+#    #+#             */
/*   Updated: 2018/02/19 18:58:14 by jpollore         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcat(char *dest, char *src)
{
	int concat_len;
	int len;

	concat_len = 0;
	while (dest[concat_len])
		concat_len++;
	len = 0;
	while (src[len])
	{
		dest[concat_len] = src[len];
		len++;
		concat_len++;
	}
	dest[concat_len] = '\0';
	return (dest);
}
