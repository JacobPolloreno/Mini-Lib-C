/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpollore <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/25 18:49:34 by jpollore          #+#    #+#             */
/*   Updated: 2018/02/26 18:58:02 by jpollore         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_LIST_H
# define FT_LIST_H
# include <stdlib.h>

typedef struct s_list	t_list;
typedef struct s_dlist	t_dlist;
struct	s_list
{
	void	*data;
	t_list	*next;
};
struct	s_dlist
{
	void	*data;
	t_dlist	*next;
	t_dlist	*prev;
};
t_list	*ft_create_elem(void *data);
#endif
