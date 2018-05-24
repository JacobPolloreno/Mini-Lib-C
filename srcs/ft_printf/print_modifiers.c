/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_modifiers.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpollore <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/22 08:51:22 by jpollore          #+#    #+#             */
/*   Updated: 2018/05/22 08:52:21 by jpollore         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void		pad(t_data *data)
{
	char	*padding;
	char	fill;
	int		len;
	int		min;

	if ((min = data->width - ft_strlen(data->value)) <= 0)
		return ;
	if (!(padding = ft_strnew(sizeof(*padding) * min)))
		return ;
	len = 0;
	fill = data->pad == PAD_ZERO ? '0' : ' ';
	while (min--)
		padding[len++] = fill;
	if (data->pad != PAD_RIGHT)
		data->value = ft_strjoindel(&padding, &data->value);
	else
		data->value = ft_strjoindel(&data->value, &padding);
}

static void	pad_num(t_data *data, int width)
{
	char	*padding;
	int		len;
	int		min;

	if (!data->prec && !ft_strcmp("0", data->value))
		data->value = ft_strdup("");
	if (data->prec != -1 &&
			data->pad != PAD_RIGHT &&
			data->width >= data->prec)
		data->pad = data->sign == -1 ? PAD_RIGHT : PAD_LEFT;
	if ((min = width - ft_strlen(data->value)) <= 0)
		return ;
	if (!(padding = ft_strnew(sizeof(*padding) * min)))
		return ;
	len = 0;
	while (min--)
		padding[len++] = '0';
	data->value = ft_strjoindel(&padding, &data->value);
}

static	int	is_num_type(int type)
{
	if (type == type_int ||
		type == type_long_long ||
		type == type_long ||
		type == type_maxint ||
		type == type_sizet ||
		type == type_unsigned_int)
		return (1);
	return (0);
}

void		precision(t_data *data)
{
	if (is_num_type(data->type))
		pad_num(data, data->prec);
	else if (data->prec < 0)
		return ;
	else if (!data->prec && data->type == type_ptr)
		data->value = ft_strdup("");
	else if (*((char *)data->value))
		data->value = ft_strsubdel(&data->value, 0, data->prec);
}

void		add_sign(t_data *data, char sign)
{
	char *append;

	append = ft_strnew(1);
	if (data->sign == 1 && sign != '-')
		append[0] = '+';
	if (data->sign == -1 && sign == '-')
		append[0] = '-';
	if (data->sign == 2)
		append[0] = ' ';
	data->value = ft_strjoindel(&append, &data->value);
}
