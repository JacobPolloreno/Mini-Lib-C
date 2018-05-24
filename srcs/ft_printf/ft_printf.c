/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpollore <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/02 10:57:30 by jpollore          #+#    #+#             */
/*   Updated: 2018/05/22 08:47:42 by jpollore         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	print_data(t_data *data)
{
	size_t len;

	len = ft_strlen(data->value);
	if (data->type == type_null && !len)
	{
		ft_putchar(0);
		len = 1;
	}
	else if (data->type == type_null && len > 1)
	{
		write(1, data->value, len - 1);
		ft_putchar(0);
	}
	else
		write(1, data->value, len);
	ft_strdel(&data->value);
	return (len);
}

static int	parse_format_placeholder(char **format, va_list ap)
{
	t_data	data;

	data.width = 0;
	data.pad = PAD_NONE;
	data.prec = -1;
	data.type = type_undefined;
	data.sign = 0;
	data.alt = 0;
	data.value = NULL;
	while (**format && (**format - 32 >= 0 && **format - 32 <= 90))
		if (g_fns[g_jump_table[**format - 32]](&data, ap, format))
			break ;
	if (data.value != NULL)
		return (print_data(&data));
	return (0);
}

int			ft_printf(const char *format, ...)
{
	va_list			ap;
	unsigned int	count;

	if (!format)
		return (0);
	va_start(ap, format);
	count = 0;
	while (format && *format)
	{
		if (*format == '%' && ++format && *format != '%')
			count += parse_format_placeholder((char **)&format, ap);
		else
		{
			write(1, format++, 1);
			count++;
		}
	}
	va_end(ap);
	return (count);
}
