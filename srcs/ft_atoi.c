/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpollore <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/15 10:13:54 by jpollore          #+#    #+#             */
/*   Updated: 2018/01/16 12:13:27 by jpollore         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		get_number(char *str, int is_neg);

int		ft_atoi(char *str)
{
	int			is_neg;

	is_neg = 0;
	while (!(str[0] >= 49 && str[0] <= 57) && (str[0] != '-'))
	{
		if ((str[0] >= 9 && str[0] <= 13) || (str[0] == 32))
			str++;
		else if (str[0] == '0')
			str++;
		else if (str[0] == '+' && (str[1] >= 48 && str[1] <= 57))
			str++;
		else
			return (0);
	}
	if (str[0] == '-')
	{
		is_neg = 1;
		str++;
	}
	return (get_number(str, is_neg));
}

int		get_number(char *str, int is_neg)
{
	long int	factor;
	int			res;
	int			strlen;

	factor = 1;
	res = 0;
	strlen = 1;
	str++;
	while (str[0] && (str[0] >= 48 && str[0] <= 57))
	{
		factor *= 10;
		strlen++;
		str++;
	}
	str = str - strlen;
	while (str[0] && (str[0] >= 48 && str[0] <= 57))
	{
		res += (str[0] - 48) * factor;
		factor /= 10;
		str++;
	}
	if (is_neg)
		res = -res;
	return (res);
}
