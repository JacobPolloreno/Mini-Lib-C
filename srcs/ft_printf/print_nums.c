/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_nums.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpollore <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/22 11:41:36 by jpollore          #+#    #+#             */
/*   Updated: 2018/05/23 08:11:48 by jpollore         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	print_num(t_data *data, va_list ap, char **format)
{
	char sign;

	(*format)++;
	conv_num(data, ap);
	if ((sign = *(data->value)) == '-' &&
			(data->value = ft_strsubdel(&data->value, 1,
			ft_strlen(data->value))))
		data->sign = -1;
	precision(data);
	if (data->pad == PAD_ZERO)
	{
		data->width = data->sign ? data->width - 1 : data->width;
		pad(data);
	}
	add_sign(data, sign);
	if (data->pad != PAD_ZERO)
		pad(data);
	return (1);
}

int	print_octal(t_data *data, va_list ap, char **format)
{
	char *append;

	(*format)++;
	conv_octal(data, ap);
	precision(data);
	if (data->alt && ft_strcmp(data->value, "0"))
	{
		append = ft_strdup("0");
		data->value = ft_strjoindel(&append, &data->value);
	}
	pad(data);
	return (1);
}

int	print_binary(t_data *data, va_list ap, char **format)
{
	(*format)++;
	conv_binary(data, ap);
	precision(data);
	if (data->prec >= 0 && data->pad == PAD_ZERO)
		data->pad = PAD_LEFT;
	pad(data);
	return (1);
}

int	print_unsigned_int(t_data *data, va_list ap, char **format)
{
	(*format)++;
	conv_unsigned_int(data, ap);
	precision(data);
	if (data->prec >= 0 && data->pad == PAD_ZERO)
		data->pad = PAD_LEFT;
	pad(data);
	return (1);
}

int	print_hex(t_data *data, va_list ap, char **format)
{
	char	*append;
	int		is_zero;

	conv_hex(data, ap);
	is_zero = ft_strequ("0", data->value);
	if (data->prec >= 0 && data->pad == PAD_ZERO)
		data->pad = PAD_LEFT;
	precision(data);
	data->width -= data->alt && !is_zero && data->pad == PAD_ZERO ? 2 : 0;
	if (data->pad == PAD_ZERO)
		pad(data);
	if (data->alt && !is_zero && data->prec)
	{
		append = ft_strdup("0x");
		data->value = ft_strjoindel(&append, &data->value);
	}
	if (data->pad != PAD_ZERO)
		pad(data);
	if ((*(*format)++) == 'X')
		ft_strtoupper(data->value);
	return (1);
}
