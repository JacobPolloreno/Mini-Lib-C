/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_uitoa.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpollore <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/26 13:31:45 by jpollore          #+#    #+#             */
/*   Updated: 2018/04/26 14:57:56 by jpollore         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Convert unsigned integer to ASCII decimal-digit string
*/

char	*ft_uitoa(unsigned long n)
{
	return (ft_uitoa_base(n, 10));
}
