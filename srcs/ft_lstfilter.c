/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstfilter.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpollore <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/28 19:24:38 by jpollore          #+#    #+#             */
/*   Updated: 2018/02/28 20:10:24 by jpollore         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstfilter(t_list *lst, int compare, int (*f)(void *, size_t, int))
{
	t_list *head;
	t_list *tail;

	if (!lst || !f)
		return (NULL);
	while (lst)
	{
		if ((*f)(lst->content, lst->content_size, compare))
		{
			if (!head &&
					((head = ft_lstnew(lst->content, lst->content_size))))
				tail = head;
			else if (head &&
					((tail->next = ft_lstnew(lst->content, lst->content_size))))
				tail = tail->next;
			else
				return (NULL);
		}
		lst = lst->next;
	}
	return (head);
}
