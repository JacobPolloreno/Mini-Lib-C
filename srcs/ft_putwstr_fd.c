#include "libft.h"

void	ft_putwstr_fd(const t_char32 *str, int fd)
{
	t_char32 *ptr;

	ptr = (t_char32 *) str;
	while (*ptr)
		ft_putwchar_fd((*ptr)++, fd);
}
