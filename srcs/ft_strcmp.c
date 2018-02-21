/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpollore <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/19 17:40:20 by jpollore          #+#    #+#             */
/*   Updated: 2018/02/19 18:46:21 by jpollore         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char *s1, char *s2)
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
