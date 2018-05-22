/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_wstrdel.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpollore <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/22 08:26:25 by jpollore          #+#    #+#             */
/*   Updated: 2018/05/22 08:26:29 by jpollore         ###   ########.fr       */
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
