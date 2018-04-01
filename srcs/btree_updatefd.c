/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree_updatefd.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpollore <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/23 17:17:29 by jpollore          #+#    #+#             */
/*   Updated: 2018/03/23 17:17:32 by jpollore         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Update data function for binary tree nodes that use t_file structs
*/

void	*btree_updatefd(void **data, void *new_data)
{
	t_file	*new_file;
	t_file	*update_file;

	delete_file((t_file **)data);
	update_file = (t_file *)(new_data);
	new_file = create_file(update_file->fd);
	if (update_file->content)
		new_file->content = ft_strdup(update_file->content);
	return (new_file);
}
