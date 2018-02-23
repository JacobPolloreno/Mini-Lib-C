/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpollore <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/19 17:40:20 by jpollore          #+#    #+#             */
/*   Updated: 2018/02/22 19:22:29 by jpollore         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(const char *s1, const char *s2)
{
	int len;

	len = 0;
	while (s1[len] || s2[len])
	{
		if (s1[len] == s2[len])
			len++;
		else
			return ((unsigned)s1[len] - (unsigned)s2[len]);
	}
	return (0);
}
