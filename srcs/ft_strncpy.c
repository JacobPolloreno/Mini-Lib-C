/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpollore <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/19 19:26:41 by jpollore          #+#    #+#             */
/*   Updated: 2018/02/19 19:26:43 by jpollore         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int len;

	len = 0;
	while (src[len] && len < n)
	{
		dest[len] = src[len];
		len++;
	}
	while (len < n)
		dest[len++] = '\0';
	return (dest);
}
