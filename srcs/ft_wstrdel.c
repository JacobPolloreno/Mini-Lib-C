/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_wstrdel.c                                        :+:      :+:    :+:  */
/*                                                    +:+ +:+         +:+     */
/*   By: jpollore <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/24 15:16:23 by jpollore          #+#    #+#             */
/*   Updated: 2018/02/27 16:55:16 by jpollore         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Free a wide string and set to NULL
*/

void	ft_wstrdel(wchar_t **as)
{
	if (!as || !*as)
		return ;
	free(*as);
	*as = NULL;
}
