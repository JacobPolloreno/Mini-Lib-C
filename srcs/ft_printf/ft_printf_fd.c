/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpollore <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/25 14:01:09 by jpollore          #+#    #+#             */
/*   Updated: 2018/05/25 14:01:12 by jpollore         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	print_data(int fd, t_data *data)
{
	size_t len;

	len = ft_strlen(data->value);
	if (data->type == type_null && !len)
	{
		ft_putchar_fd(fd, 0);
		len = 1;
	}
	else if (data->type == type_null && len > 1)
	{
		write(fd, data->value, len - 1);
		ft_putchar_fd(fd, 0);
	}
	else
		write(fd, data->value, len);
	ft_strdel(&data->value);
	return (len);
}

static int	parse_format_placeholder(int fd, char **format, va_list ap)
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
		return (print_data(fd, &data));
	return (0);
}

int			ft_printf_fd(int fd, const char *format, ...)
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
			count += parse_format_placeholder(fd, (char **)&format, ap);
		else
		{
			write(1, format++, 1);
			count++;
		}
	}
	va_end(ap);
	return (count);
}
