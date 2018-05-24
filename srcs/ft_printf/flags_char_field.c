/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   flags_char_field.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpollore <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/22 11:47:43 by jpollore          #+#    #+#             */
/*   Updated: 2018/05/24 15:25:01 by jpollore         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	flag_sign(t_data *data, va_list ap, char **format)
{
	(void)ap;
	if (**format == '+' && ++(*format))
		data->sign = 1;
	return (0);
}

int	flag_space(t_data *data, va_list ap, char **format)
{
	(void)ap;
	if (**format == ' ' && ++(*format))
		if (data->sign != 1)
			data->sign = 2;
	return (0);
}

int	flag_alt(t_data *data, va_list ap, char **format)
{
	(void)ap;
	(*format)++;
	data->alt = 1;
	return (0);
}
