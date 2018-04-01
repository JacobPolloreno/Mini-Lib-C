/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_deletefile.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpollore <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/22 12:36:24 by jpollore          #+#    #+#             */
/*   Updated: 2018/03/22 12:36:31 by jpollore         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Free file and set to null
*/

void	delete_file(t_file **file)
{
	if (!file)
		return ;
	free(*file);
	*file = NULL;
}
