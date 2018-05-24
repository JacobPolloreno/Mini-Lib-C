/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   conv_nums.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpollore <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/22 11:41:53 by jpollore          #+#    #+#             */
/*   Updated: 2018/05/24 15:24:47 by jpollore         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	conv_num(t_data *data, va_list ap)
{
	if (data->type == type_long)
		data->value = ft_ltoa_base(va_arg(ap, long), 10);
	else if (data->type == type_char)
		data->value = ft_itoa_base((char)va_arg(ap, int), 10);
	else if (data->type == type_short)
		data->value = ft_itoa_base((short)va_arg(ap, int), 10);
	else if (data->type == type_long_long)
		data->value = ft_ltoa_base(va_arg(ap, long long), 10);
	else if (data->type == type_sizet)
		data->value = ft_ltoa_base(va_arg(ap, size_t), 10);
	else if (data->type == type_maxint)
		data->value = ft_ultoa_base(va_arg(ap, uintmax_t), 10);
	else if ((data->type = type_int))
		data->value = ft_itoa_base(va_arg(ap, int), 10);
}

void	conv_octal(t_data *data, va_list ap)
{
	if (data->type == type_long)
		data->value = ft_uitoa_base(va_arg(ap, unsigned long), 8);
	else if ((data->type = type_unsigned_int))
		data->value = ft_uitoa_base(va_arg(ap, unsigned int), 8);
}

void	conv_unsigned_int(t_data *data, va_list ap)
{
	if (data->type == type_long)
		data->value = ft_ultoa_base(va_arg(ap, unsigned long), 10);
	else if (data->type == type_long_long)
		data->value = ft_ultoa_base(va_arg(ap, unsigned long long), 10);
	else if (data->type == type_sizet)
		data->value = ft_ultoa_base(va_arg(ap, size_t), 10);
	else if (data->type == type_maxint)
		data->value = ft_ultoa_base(va_arg(ap, uintmax_t), 10);
	else if ((data->type = type_unsigned_int))
		data->value = ft_uitoa_base(va_arg(ap, unsigned int), 10);
}

void	conv_binary(t_data *data, va_list ap)
{
	if (data->type == type_long)
		data->value = ft_ultoa_base(va_arg(ap, unsigned long), 2);
	else if (data->type == type_long_long)
		data->value = ft_ultoa_base(va_arg(ap, unsigned long long), 2);
	else if (data->type == type_sizet)
		data->value = ft_ultoa_base(va_arg(ap, size_t), 2);
	else if (data->type == type_maxint)
		data->value = ft_ultoa_base(va_arg(ap, uintmax_t), 2);
	else if ((data->type = type_unsigned_int))
		data->value = ft_uitoa_base(va_arg(ap, unsigned int), 2);
}

void	conv_hex(t_data *data, va_list ap)
{
	if (data->type == type_long)
		data->value = ft_ultoa_base(va_arg(ap, unsigned long int), 16);
	else if (data->type == type_long_long)
		data->value = ft_ultoa_base(va_arg(ap, unsigned long long), 16);
	else if (data->type == type_sizet)
		data->value = ft_ultoa_base(va_arg(ap, size_t), 16);
	else if (data->type == type_maxint)
		data->value = ft_ultoa_base(va_arg(ap, uintmax_t), 16);
	else if ((data->type = type_unsigned_int))
		data->value = ft_ultoa_base(va_arg(ap, unsigned int), 16);
}
