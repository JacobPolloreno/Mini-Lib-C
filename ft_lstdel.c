/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpollore <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/27 17:05:03 by jpollore          #+#    #+#             */
/*   Updated: 2018/02/27 18:50:20 by jpollore         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "ft_list.h"

void	ft_lstdel(t_list **alst, void (*del)(void *, size_t))
{
	t_list *prev;
	t_list *next;

	if (!alst || !*alst)
		return ;
	next = *alst;
	while (next)
	{
		prev = next;
		next = next->next;
		ft_lstdelone(&prev, del);
	}
	*alst = NULL;
}
