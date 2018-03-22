/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fdsearchcmp.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpollore <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/22 12:31:54 by jpollore          #+#    #+#             */
/*   Updated: 2018/03/22 12:34:15 by jpollore         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		fdsearchcmp(void *data_ref, void *node)
{
	t_file	*ptr;
	int		ref;

	if (!data_ref || !node)
		return (-1);
	ptr = (t_file *)node;
	ref = *(int *)data_ref;
	return (ref - ptr->fd);
}
