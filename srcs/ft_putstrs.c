/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstrs.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpollore <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/13 15:10:22 by jpollore          #+#    #+#             */
/*   Updated: 2018/03/13 15:29:45 by jpollore         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Write strings(string array) to standard output
*/

void	ft_putstrs(const char **strs)
{
	size_t	idx;
	char	**ptr;

	if (!strs)
		return ;
	idx = 0;
	ptr = (char **)strs;
	while (ptr[idx])
	{
		ft_putstr(ptr[idx++]);
		ft_putchar('\n');
	}
}
