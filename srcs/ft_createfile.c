/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_createfile.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpollore <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/22 12:36:39 by jpollore          #+#    #+#             */
/*   Updated: 2018/03/22 12:36:43 by jpollore         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_file		*create_file(int fd)
{
	t_file *node;

	if ((node = (t_file *)ft_memalloc(sizeof(*node))))
	{
		node->fd = fd;
		node->content = 0;
	}
	return (node);
}
