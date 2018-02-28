/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpollore <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/25 18:49:34 by jpollore          #+#    #+#             */
/*   Updated: 2018/02/27 19:18:39 by jpollore         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_LIST_H
# define FT_LIST_H
# include <stdlib.h>

typedef struct s_list	t_list;
typedef struct s_dlist	t_dlist;
struct	s_list
{
	void	*content;
	size_t	content_size;
	t_list	*next;
};
struct	s_dlist
{
	void	*content;
	size_t	content_size;
	t_dlist	*next;
	t_dlist	*prev;
};
t_list	*ft_create_elem(void *content, size_t content_size);
t_list	*ft_lstnew(const void *content, size_t content_size);
t_list	*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem));
void	ft_lstdelone(t_list **alst, void (*del)(void *, size_t));
void	ft_lstdel(t_list **alst, void (*del)(void *, size_t));
void	ft_lstadd(t_list **alst, t_list *new);
void	ft_lsiter(t_list *lst, void (*f)(t_list *elem));
#endif
