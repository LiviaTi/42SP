/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_if.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: liferrei <liferrei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/11 11:53:07 by liferrei          #+#    #+#             */
/*   Updated: 2025/07/11 11:55:56 by liferrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	is_not_empty(char *str)
{
	return (str[0] != '\0');
}

int	ft_count_if(char **tab, int (*f)(char*))
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (tab[i])
	{
		if (f(tab[i]))
		{
			count++;
		}
		i++;
	}
	return (count);
}

/*
#include <stdio.h>
int main(void)
{
    char *tab[] = {"hello", "", "world", "", "!", NULL};

    int result = ft_count_if(tab, is_not_empty);
    printf("Strings não vazias: %d\n", result); // Saída: 3

    return 0;
}
*/