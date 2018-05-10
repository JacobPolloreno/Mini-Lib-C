#include "libft.h"

void	ft_putwchar(const t_char32 ch)
{
	ft_putwchar_fd(ch, STDOUT_FILENO);
}
