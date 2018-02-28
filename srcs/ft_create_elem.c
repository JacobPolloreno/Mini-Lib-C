/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_create_elem.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpollore <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/25 18:48:07 by jpollore          #+#    #+#             */
/*   Updated: 2018/02/27 15:17:21 by jpollore         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "ft_list.h"

t_list	*ft_create_elem(void *content, size_t content_size)
{
	t_list *tmp;

	tmp = (t_list *)ft_memalloc(sizeof(t_list));
	if (tmp)
	{
		tmp->content = content;
		tmp->content_size = content_size;
		tmp->next = NULL;
	}
	return (tmp);
}
