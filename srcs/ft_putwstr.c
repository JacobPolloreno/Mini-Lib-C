#include "libft.h"

void	ft_putwstr(const t_char32 *str)
{
	ft_putwstr_fd(str, STDOUT_FILENO);
}
