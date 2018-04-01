/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpollore <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/27 15:29:03 by jpollore          #+#    #+#             */
/*   Updated: 2018/02/28 19:14:05 by jpollore         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Return new linked list element with content set to param content
*/

t_list	*ft_lstnew(const void *content, size_t content_size)
{
	t_list *node;

	if ((node = (t_list *)ft_memalloc(sizeof(t_list))))
	{
		if (content && (node->content = (void *)ft_memalloc(content_size)))
		{
			node->content = ft_memcpy(node->content, content, content_size);
			node->content_size = content_size;
			node->next = NULL;
		}
		else if (content)
		{
			free(node);
			node = NULL;
		}
		else
		{
			node->content = NULL;
			node->content_size = 0;
			node->next = NULL;
		}
	}
	return (node);
}
