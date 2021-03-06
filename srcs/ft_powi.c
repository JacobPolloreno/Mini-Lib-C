/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_powi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpollore <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/19 15:41:21 by jpollore          #+#    #+#             */
/*   Updated: 2018/05/19 15:41:23 by jpollore         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_powi(int base, int pow)
{
	if (pow == 0)
		return (1);
	else
		return (base * ft_powi(base, pow - 1));
}
