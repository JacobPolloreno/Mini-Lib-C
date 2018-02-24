/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpollore <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/24 08:58:09 by jpollore          #+#    #+#             */
/*   Updated: 2018/02/24 09:41:59 by jpollore         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int			ft_atoi(const char *str)
{
	long int	res;
	int			sign;

	sign = 1;
	res = 0;
	while (!(*str >= 48 && *str <= 57) && (*str != '-'))
	{
		if (((*str >= 9 && *str <= 13) || (*str == 32)) ||
				(*str == '+' && (str[1] >= 48 && str[1] <= 57)))
			str++;
		else
			return (0);
	}
	if (*str == '-')
	{
		sign = -1;
		str++;
	}
	while (*str && (*str >= 48 && *str <= 57))
	{
		res = res * 10 + (*str - 48);
		str++;
	}
	return (res * sign);
}
