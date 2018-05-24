/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   aliases_misc.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpollore <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/22 11:42:25 by jpollore          #+#    #+#             */
/*   Updated: 2018/05/24 15:24:16 by jpollore         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	alias_s(t_data *data, va_list ap, char **format)
{
	char	*flag;

	(*format)++;
	flag = ft_strdup("ls");
	length_long(data, ap, &flag);
	print_wstr(data, ap, &flag);
	flag -= 2;
	ft_strdel(&flag);
	return (1);
}

int	double_percent(t_data *data, va_list ap, char **format)
{
	(void)ap;
	(*format)++;
	data->value = ft_strdup("%");
	pad(data);
	return (1);
}

int	null_handler(t_data *data, va_list ap, char **format)
{
	(void)ap;
	(*format)++;
	(void)data;
	return (-1);
}
