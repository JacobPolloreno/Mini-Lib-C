/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpollore <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/27 18:51:31 by jpollore          #+#    #+#             */
/*   Updated: 2018/02/27 18:54:09 by jpollore         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "ft_list.h"

void	ft_lsiter(t_list *lst, void (*f)(t_list *elem))
{
	if (!lst)
		return ;
	while (lst)
	{
		(*f)(lst);
		lst = lst->next;
	}
}
