/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsdel.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpollore <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/26 14:16:18 by jpollore          #+#    #+#             */
/*   Updated: 2018/05/26 14:25:57 by jpollore         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Free strings and set to NULL
*/

void	ft_strsdel(char ***as)
{
	char **ptr;

	if (!as || !*as)
		return ;
	ptr = *as;
	while (**as)
	{
		free(**as);
		(*as)++;
	}
	free(ptr);
	ptr = NULL;
}
