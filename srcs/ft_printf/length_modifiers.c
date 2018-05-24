/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   length_modifiers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpollore <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/22 08:48:00 by jpollore          #+#    #+#             */
/*   Updated: 2018/05/24 15:25:29 by jpollore         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	length_char(t_data *data, va_list ap, char **format)
{
	(void)ap;
	(*format)++;
	data->type = type_char;
	return (0);
}

int	length_long(t_data *data, va_list ap, char **format)
{
	(void)ap;
	(*format)++;
	if (**format == 'l' && (*format)++)
		data->type = type_long_long;
	else
		data->type = type_long;
	return (0);
}

int	length_sizet(t_data *data, va_list ap, char **format)
{
	(void)ap;
	(*format)++;
	data->type = type_sizet;
	return (0);
}

int	length_short(t_data *data, va_list ap, char **format)
{
	(void)ap;
	(*format)++;
	if (**format == 'h' && (*format)++)
		data->type = type_char;
	else
		data->type = type_short;
	return (0);
}

int	length_maxint(t_data *data, va_list ap, char **format)
{
	(void)ap;
	(*format)++;
	data->type = type_maxint;
	return (0);
}
