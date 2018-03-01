/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_issort.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpollore <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/01 09:08:01 by jpollore          #+#    #+#             */
/*   Updated: 2018/03/01 09:08:03 by jpollore         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_issort(int *tab, int length, int (*f)(int, int))
{
	int ele;

	ele = 0;
	if (!tab || !f)
		return (0);
	while (ele < length - 1)
	{
		if (((*f)(tab[ele], tab[ele + 1])) > 0)
			return (0);
		ele++;
	}
	return (1);
}
