/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpollore <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/28 20:26:37 by jpollore          #+#    #+#             */
/*   Updated: 2018/02/28 20:27:09 by jpollore         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_sort(int *tab, int length, int (*f)(int, int))
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
