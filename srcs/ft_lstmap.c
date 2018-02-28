/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpollore <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/27 19:15:15 by jpollore          #+#    #+#             */
/*   Updated: 2018/02/27 20:06:18 by jpollore         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "ft_list.h"

static void	lst_del_f(void *content, size_t content_size);

t_list		*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list *head;
	t_list *tail;

	if (!lst)
		return (NULL);
	tail = (*f)(lst);
	head = tail;
	while (lst->next)
	{
		lst = lst->next;
		if ((tail->next = (*f)(lst)))
			tail = tail->next;
		else
		{
			ft_lstdel(&head, &lst_del_f);
			return (NULL);
		}
	}
	return (head);
}

static void	lst_del_f(void *content, size_t content_size)
{
	if (content && content_size)
		free(content);
}
