/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   flags_width_prec.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpollore <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/22 11:47:33 by jpollore          #+#    #+#             */
/*   Updated: 2018/05/24 15:25:10 by jpollore         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	flag_pad(t_data *data, va_list ap, char **format)
{
	(void)ap;
	if (**format == '-' && ++(*format))
	{
		data->pad = PAD_RIGHT;
		data->sign = -1;
	}
	while (**format == '0' && ++(*format))
		data->pad = data->pad == PAD_RIGHT ? PAD_RIGHT : PAD_ZERO;
	while (**format == ' ' && ++(*format))
		data->pad = PAD_LEFT;
	return (0);
}

int	flag_width(t_data *data, va_list ap, char **format)
{
	if (**format == '*' && ++(*format))
	{
		if ((data->width = va_arg(ap, int)) < 0)
		{
			data->pad = PAD_RIGHT;
			data->width *= -1;
		}
	}
	else
		while (ft_isdigit(**format))
			data->width = data->width * 10 + *((*format)++) - '0';
	return (0);
}

int	flag_precision(t_data *data, va_list ap, char **format)
{
	(void)ap;
	data->prec = 0;
	(*format)++;
	if (**format == '*' && ++(*format))
		data->prec = va_arg(ap, int);
	else if (ft_isdigit(**format))
		while (ft_isdigit(**format))
			data->prec = data->prec * 10 + *((*format)++) - '0';
	else
		data->pad = PAD_LEFT;
	return (0);
}
