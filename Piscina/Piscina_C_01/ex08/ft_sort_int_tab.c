/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: liferrei <liferrei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/20 13:41:33 by liferrei          #+#    #+#             */
/*   Updated: 2025/03/24 14:54:30 by liferrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_sort_int_tab(int *tab, int size);

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	j;
	int	x;

	i = 0;
	while (i < (size - 1))
	{
		j = i + 1;
		while (j < size)
		{
			if (tab[i] > tab[j])
			{
				x = tab[i];
				tab[i] = tab[j];
				tab[j] = x;
			}
			j++;
		}
		i++;
	}
}

/*
#include <stdio.h>
int main()
{
	int tab[]={10,6,7,3,1,9};
	int size = 6;
	int i=0;

	ft_sort_int_tab(tab, size);

	while (i < size) 
	{
       	printf("%d ", tab[i]); 
		i++;
	}
	return 0;
}
*/