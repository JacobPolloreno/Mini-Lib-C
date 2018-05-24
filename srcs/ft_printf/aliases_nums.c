/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   aliases_nums.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpollore <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/22 11:44:47 by jpollore          #+#    #+#             */
/*   Updated: 2018/05/24 15:24:29 by jpollore         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	alias_c(t_data *data, va_list ap, char **format)
{
	char	*flag;

	(*format)++;
	flag = ft_strdup("lc");
	length_long(data, ap, &flag);
	print_char(data, ap, &flag);
	flag -= 2;
	ft_strdel(&flag);
	return (1);
}

int	alias_d(t_data *data, va_list ap, char **format)
{
	char	*flag;

	(*format)++;
	flag = ft_strdup("ld");
	length_long(data, ap, &flag);
	print_num(data, ap, &flag);
	flag -= 2;
	ft_strdel(&flag);
	return (1);
}

int	alias_o(t_data *data, va_list ap, char **format)
{
	char	*flag;

	(*format)++;
	flag = ft_strdup("lo");
	length_long(data, ap, &flag);
	print_octal(data, ap, &flag);
	flag -= 2;
	ft_strdel(&flag);
	return (1);
}

int	alias_u(t_data *data, va_list ap, char **format)
{
	char	*flag;

	(*format)++;
	flag = ft_strdup("lu");
	length_long(data, ap, &flag);
	print_unsigned_int(data, ap, &flag);
	flag -= 2;
	ft_strdel(&flag);
	return (1);
}
