/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpollore <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/16 01:26:16 by jpollore          #+#    #+#             */
/*   Updated: 2018/02/19 18:54:03 by jpollore         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

static void			concat(char **src_ptr, char **dest_ptr, unsigned int len);
static unsigned int	get_strlen(char *str);

unsigned int		ft_strlcat(char *dest, char *src, unsigned int size)
{
	char			*dest_ptr;
	char			*src_ptr;
	int				dest_len;
	unsigned int	len;

	dest_ptr = dest;
	src_ptr = src;
	len = size;
	while (len-- && *dest_ptr)
		dest_ptr++;
	dest_len = dest_ptr - dest;
	len = size - dest_len;
	if (len == 0)
		return (dest_len + get_strlen(src));
	concat(&src_ptr, &dest_ptr, len);
	*dest_ptr = '\0';
	return (dest_len + (src_ptr - src));
}

static void			concat(char **src_ptr, char **dest_ptr, unsigned int len)
{
	while (**src_ptr)
	{
		if (len != 1)
		{
			**dest_ptr = **src_ptr;
			*dest_ptr = *dest_ptr + 1;
			len--;
		}
		*src_ptr = *src_ptr + 1;
	}
}

static unsigned int	get_strlen(char *str)
{
	unsigned int len;

	len = 0;
	while (str[len])
		len++;
	return (len);
}
