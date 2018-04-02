/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_wordtab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpollore <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/28 20:24:21 by jpollore          #+#    #+#             */
/*   Updated: 2018/02/28 20:27:36 by jpollore         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Lexicographically sort (quicksort alg) word array
*/

static void		ft_string_swap(char **a, char **b)
{
	char *swp;

	swp = *a;
	*a = *b;
	*b = swp;
}

static int		partition(char **tab, int left, int right)
{
	char	*pivot;
	int		i;
	int		j;

	pivot = tab[left];
	i = left + 1;
	j = i;
	while (j <= right)
	{
		if (ft_strcmp(tab[j], pivot))
		{
			ft_string_swap(&tab[j], &tab[i]);
			i++;
		}
		j++;
	}
	ft_string_swap(&tab[left], &tab[i - 1]);
	return (i - 1);
}

static void		quicksort(char **tab, int left, int right)
{
	int p_i;

	if (left < right)
	{
		p_i = partition(tab, left, right);
		quicksort(tab, left, p_i - 1);
		quicksort(tab, p_i + 1, right);
	}
}

void			ft_sort_wordtab(char **tab)
{
	int words;

	if (!tab)
		return ;
	words = 0;
	while (tab[words] != 0)
		words++;
	quicksort(tab, 0, words - 1);
}
