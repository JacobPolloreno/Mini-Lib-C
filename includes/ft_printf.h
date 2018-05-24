/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ftprintf.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpollore <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/03 17:25:44 by jpollore          #+#    #+#             */
/*   Updated: 2018/05/24 15:55:13 by jpollore         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include "libft.h"
# include <stdarg.h>

/*
** LINE
**
**  52  ' '  11,        0,        0,  '#'   7,
**  53        0,  '%'   6,        0, '\\'   0,
**  54        0,        0,  '*'  12,  '+'  10,
**  55        0,  '-'   8,  '.'   9,        0,
**  56  '0'   8,  '1'  12,  '2'  12,  '3'  12,
**  57  '4'  12,  '5'  12,  '6'  12,  '7'  12,
**  58  '8'  12,  '9'  12,        0,        0,
**  59        0,        0,        0,        0,
**  60        0,  'A'   0,        0,  'C'   1,
**  61  'D'   2,  'E'   0,  'F'   0,  'G'   0,
**  62  'H'   0,  'I'   0,        0,        0,
**  63  'L'   0,        0,        0,  'O'   3,
**  64        0,        0,        0,  'S'   4,
**  65        0,  'U'   5,        0,        0,
**  66  'X'  19,        0,  'Z'   0,        0,
**  67        0,        0,        0,        0,
**  68        0,  'a'   0,  'b'  17,  'c'  18,
**  69  'd'  21,  'e'   0,  'f'   0,  'g'   0,
**  70  'h'  15,  'i'  21,  'j'  14,        0,
**  71  'l'  13,  'm'   0,  'n'   0,  'o'  20,
**  72  'p'  22,  'q'   0,        0,  's'  23,
**  73  't'   0,  'u'  24,        0,        0,
**  74  'x'  19,        0,  'z'  16
*/

static unsigned int g_jump_table[] =
{
	11, 0, 0, 7,
	0, 6, 0, 0,
	0, 0, 12, 10,
	0, 8, 9, 0,
	8, 12, 12, 12,
	12, 12, 12, 12,
	12, 12, 0, 0,
	0, 0, 0, 0,
	0, 0, 0, 1,
	2, 0, 0, 0,
	0, 0, 0, 0,
	0, 0, 0, 3,
	0, 0, 0, 4,
	0, 5, 0, 0,
	19, 0, 0, 0,
	0, 0, 0, 0,
	0, 0, 17, 18,
	21, 0, 0, 0,
	15, 21, 14, 0,
	13, 0, 0, 20,
	22, 0, 0, 23,
	0, 24, 0, 0,
	19, 0, 16
};

typedef struct
{
	enum
	{
		type_undefined,
		type_char,
		type_null,
		type_int,
		type_short,
		type_long,
		type_long_long,
		type_float,
		type_double,
		type_ptr,
		type_unsigned_int,
		type_unsigned_long,
		type_maxint,
		type_sizet
	}		type;

	char	*value;
	int		width;
	int		prec;
	int		pad;
	int		sign;
	int		alt;
	int		len;
}		t_data;

typedef	enum
{
	PAD_NONE = -1,
	PAD_RIGHT,
	PAD_ZERO,
	PAD_LEFT,
}	t_pad;

int		ft_printf(const char *format, ...);
int		alias_c(t_data *data, va_list ap, char **format);
int		alias_u(t_data *data, va_list ap, char **format);
int		alias_d(t_data *data, va_list ap, char **format);
int		alias_o(t_data *data, va_list ap, char **format);
int		alias_s(t_data *data, va_list ap, char **format);
int		double_percent(t_data *data, va_list ap, char **format);
int		null_handler(t_data *data, va_list ap, char **format);
void	conv_binary(t_data *data, va_list ap);
void	conv_char(t_data *data, va_list ap);
void	conv_hex(t_data *data, va_list ap);
void	conv_num(t_data *data, va_list ap);
void	conv_octal(t_data *data, va_list ap);
void	conv_ptr(t_data *data, va_list ap);
void	conv_unsigned_int(t_data *data, va_list ap);
void	pad(t_data *data);
void	precision(t_data *data);
void	add_sign(t_data *data, char sign);
int		length_char(t_data *data, va_list ap, char **format);
int		length_long(t_data *data, va_list ap, char **format);
int		length_short(t_data *data, va_list ap, char **format);
int		length_maxint(t_data *data, va_list ap, char **format);
int		length_sizet(t_data *data, va_list ap, char **format);
int		flag_sign(t_data *data, va_list ap, char **format);
int		flag_space(t_data *data, va_list ap, char **format);
int		flag_pad(t_data *data, va_list ap, char **format);
int		flag_width(t_data *data, va_list ap, char **format);
int		flag_precision(t_data *data, va_list ap, char **format);
int		flag_length(t_data *data, va_list ap, char **format);
int		flag_alt(t_data *data, va_list ap, char **format);
int		print_binary(t_data *data, va_list ap, char **format);
int		print_num(t_data *data, va_list ap, char **format);
int		print_ptr(t_data *data, va_list ap, char **format);
int		print_octal(t_data *data, va_list ap, char **format);
int		print_unsigned_int(t_data *data, va_list ap, char **format);
int		print_str(t_data *data, va_list ap, char **format);
int		print_wstr(t_data *data, va_list ap, char **format);
int		print_char(t_data *data, va_list ap, char **format);
int		print_hex(t_data *data, va_list ap, char **format);

static int	(*g_fns[])(t_data *, va_list ap, char **format) =
{
	null_handler,
	alias_c,
	alias_d,
	alias_o,
	alias_s,
	alias_u,
	double_percent,
	flag_alt,
	flag_pad,
	flag_precision,
	flag_sign,
	flag_space,
	flag_width,
	length_long,
	length_maxint,
	length_short,
	length_sizet,
	print_binary,
	print_char,
	print_hex,
	print_octal,
	print_num,
	print_ptr,
	print_str,
	print_unsigned_int,
	print_wstr
};
#endif
