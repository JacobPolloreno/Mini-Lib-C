/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_misc.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpollore <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/22 11:39:52 by jpollore          #+#    #+#             */
/*   Updated: 2018/05/22 11:39:54 by jpollore         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	print_ptr(t_data *data, va_list ap, char **format)
{
	char	*append;

	(*format)++;
	conv_ptr(data, ap);
	append = ft_strdup("0x");
	data->value = ft_strjoindel(&append, &data->value);
	return (1);
}

int	print_str(t_data *data, va_list ap, char **format)
{
	if (data->type == type_long)
		return (print_wstr(data, ap, format));
	(*format)++;
	data->value = va_arg(ap, char *);
	data->value = ft_strdup(data->value ? data->value : "(null)");
	data->type = type_ptr;
	precision(data);
	pad(data);
	return (1);
}

int	print_wstr(t_data *data, va_list ap, char **format)
{
	wchar_t *value;

	(*format)++;
	value = va_arg(ap, wchar_t *);
	value = ft_wstrdup(value ? value : L"(null)");
	data->value = ft_wstr_to_str(value);
	ft_wstrdel(&value);
	data->type = type_ptr;
	precision(data);
	pad(data);
	return (1);
}

int	print_char(t_data *data, va_list ap, char **format)
{
	(*format)++;
	conv_char(data, ap);
	pad(data);
	return (1);
}
