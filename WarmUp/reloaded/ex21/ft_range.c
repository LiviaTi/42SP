/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: liferrei <liferrei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/09 14:45:17 by liferrei          #+#    #+#             */
/*   Updated: 2025/07/09 15:11:27 by liferrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max);

int	*ft_range(int min, int max)
{
	int	*arr;
	int	size;
	int	i;

	size = max - min;
	if (min >= max)
	{
		return (NULL);
	}	
	arr = (int *)malloc(sizeof(int) * size);
	if (!arr)
	{
		return (NULL);
	}
	i = 0;
	while (i < size)
	{
		arr[i] = min + i;
		i++;
	}
	return (arr);
}

/*
#include <stdio.h>
int main() {
    int min = 1;
    int max = 8;
    int *range;
    int size = max - min;

    range = ft_range(min, max);

    if (range == NULL) {
        printf("Intervalo inválido ou erro na alocação.\n");
        return 1;
    }

    printf("Array de %d a %d:\n", min, max - 1);
    for (int i = 0; i < size; i++) {
        printf("%d ", range[i]);
    }
    printf("\n");

    free(range); 
    return 0;
}
*/