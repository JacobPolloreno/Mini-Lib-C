/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcre.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpollore <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/05 10:19:45 by jpollore          #+#    #+#             */
/*   Updated: 2018/03/05 10:22:25 by jpollore         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_strcre(char *str, char ch1, char ch2)
{
	unsigned char *ptr;

	ptr = (unsigned char *)str;
	while (*ptr)
	{
		if (*ptr == ch1)
			*ptr = ch2;
		ptr++;
	}
	if (*ptr == ch1)
		*ptr = ch2;
}
