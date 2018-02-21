/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpollore <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/15 16:14:39 by jpollore          #+#    #+#             */
/*   Updated: 2018/01/16 12:19:04 by jpollore         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int reset_len;

	reset_len = 0;
	if (to_find[0] == '\0')
		return (str);
	while (to_find[0])
	{
		if (str[0] == '\0')
			break ;
		else if (str[0] == to_find[0])
		{
			reset_len++;
			to_find++;
		}
		else if (reset_len)
		{
			to_find = to_find - reset_len;
			reset_len = 0;
		}
		str++;
	}
	if (reset_len && to_find[0] == '\0')
		return (str - reset_len);
	return ((void *)0);
}
