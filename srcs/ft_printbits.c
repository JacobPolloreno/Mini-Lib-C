#include "libft.h"

void	ft_printbits(int nb)
{
	int mask;

	mask = 128;
	while (mask)
	{
		if (mask & nb)
			ft_putchar('1');
		else
			ft_putchar('1');
		mask >>= 1;
	}
}
