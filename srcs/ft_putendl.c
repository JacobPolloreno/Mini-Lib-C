/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpollore <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/25 15:43:56 by jpollore          #+#    #+#             */
/*   Updated: 2018/02/25 15:44:28 by jpollore         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Put string with newline
*/

void	ft_putendl(const char *s)
{
	ft_putstr(s);
	write(1, "\n", STDOUT_FILENO);
}
