/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   conv_misc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpollore <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/22 11:39:59 by jpollore          #+#    #+#             */
/*   Updated: 2018/05/24 15:24:38 by jpollore         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	conv_ptr(t_data *data, va_list ap)
{
	unsigned long value;

	if (!(value = va_arg(ap, unsigned long int)))
		data->value = ft_strdup("0");
	else
		data->value = ft_uitoa_base(value, 16);
}

/*
** TO PRINT WIDECHAR:
**
** REPLACE LINE 41-42:
**	data->value = ft_strnew(1);
**	(data->value)[0] = (unsigned char)va_arg(ap, wchar_t);
**
** WITH:
** 	data->value = ft_getwchar(va_arg(ap, wchar_t));
** 	if (((wchar_t *)data->value)[0] == 0)
*/

void	conv_char(t_data *data, va_list ap)
{
	if (data->type == type_long)
	{
		data->value = ft_strnew(1);
		(data->value)[0] = (unsigned char)va_arg(ap, wchar_t);
		if (!data->value[0])
			data->type = type_null;
		else
			data->type = type_ptr;
	}
	else
	{
		data->value = ft_strnew(1);
		(data->value)[0] = (unsigned char)va_arg(ap, int);
		if (!data->value[0])
			data->type = type_null;
		else
			data->type = type_char;
	}
}
