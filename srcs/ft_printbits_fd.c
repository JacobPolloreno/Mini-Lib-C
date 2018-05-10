#include "libft.h"

void	ft_printbits_fd(int nb, int fd)
{
	int mask;

	mask = 128;
	while (mask)
	{
		if (mask & nb)
			ft_putchar_fd('1', fd);
		else
			ft_putchar_fd('1', fd);
		mask >>= 1;
	}
}
