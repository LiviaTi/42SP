/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: liferrei <liferrei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/19 17:27:29 by liferrei          #+#    #+#             */
/*   Updated: 2025/03/24 14:54:12 by liferrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size);

void	ft_rev_int_tab(int *tab, int size)
{
	int	temp;
	int	i;

	i = 0;
	while (i < size / 2)
	{
		temp = tab[i];
		tab[i] = tab[size - i - 1];
		tab[size - i - 1] = temp;
		i++;
	}
}

/*
#include <stdio.h>
int main()
{
	int tab[] = {1,2,3,4,5,6};
	int size = 6;
	int i;

	i=0;

	ft_rev_int_tab(tab, size);

		while (i < size) 
		{
       		printf("%d ", tab[i]); 
			i++;
		}
	return 0;
}
*/