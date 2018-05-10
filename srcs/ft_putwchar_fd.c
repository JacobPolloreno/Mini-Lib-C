#include "libft.h"

/*
** Char indicates 1 byte storage while wide is 2 bytes
** 	Char. number range  |        UTF-8 octet sequence
** 	   (hexadecimal)    |              (binary)
** 	--------------------+---------------------------------------------
** 	0000 0000-0000 007F | 0xxxxxxx
** 	0000 0080-0000 07FF | 110xxxxx 10xxxxxx
** 	0000 0800-0000 FFFF | 1110xxxx 10xxxxxx 10xxxxxx
** 	0001 0000-0010 FFFF | 11110xxx 10xxxxxx 10xxxxxx 10xxxxxx
*/

void	ft_putwchar_fd(const t_char32 ch, int fd)
{
	if (ch < (1 << 7))
	{
		ft_putchar_fd(ch, fd);
	}
	else if (ch < (1 << 11))
	{
		ft_putchar_fd((ch >> 6) | 0xC0, fd);
		ft_putchar_fd((ch & 0x3F) | 0x80, fd);
	}
	else if (ch < (1 << 16))
	{
		ft_putchar_fd((ch >> 12) | 0xE0, fd);
		ft_putchar_fd(((ch >> 6) & 0x3F) | 0x80, fd);
		ft_putchar_fd((ch & 0x3F) | 0x80, fd);
	}
	else if (ch < (1 << 21))
	{
		ft_putchar_fd((ch >> 18) | 0xF0, fd);
		ft_putchar_fd(((ch >> 12) & 0x3F) | 0x80, fd);
		ft_putchar_fd(((ch >> 6) & 0x3F) | 0x80, fd);
		ft_putchar_fd(ch & 0x3F, fd);
	}
}
