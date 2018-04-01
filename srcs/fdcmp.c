/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fdcmp.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpollore <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/22 12:32:06 by jpollore          #+#    #+#             */
/*   Updated: 2018/03/22 12:32:09 by jpollore         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Comparison function for t_file structs file descriptors
*/

int		fd_cmp(void *fd1, void *fd2)
{
	t_file	*ptr1;
	t_file	*ptr2;

	if (!fd1 || !fd2)
		return (-1);
	ptr1 = (t_file *)fd1;
	ptr2 = (t_file *)fd2;
	return (ptr1->fd - ptr2->fd);
}
