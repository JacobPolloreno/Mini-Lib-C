/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strclr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpollore <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/24 15:33:05 by jpollore          #+#    #+#             */
/*   Updated: 2018/02/28 16:55:19 by jpollore         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Clear string by zero-ing memory of string
*/

void	ft_strclr(char *s)
{
	if (!s || !*s)
		return ;
	ft_memset(s, '\0', ft_strlen(s) + 1);
}
