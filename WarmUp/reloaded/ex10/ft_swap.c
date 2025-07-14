/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: liferrei <liferrei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/08 16:56:55 by liferrei          #+#    #+#             */
/*   Updated: 2025/07/08 16:57:10 by liferrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_swap(int *a, int *b)
{
	int	aux;

	aux = 0;
	aux = *a;
	*a = *b;
	*b = aux;
}

/*
#include <stdio.h>
int main(void)
{
	int a = 5;
	int b = 10;
	printf("Valor de a:%d e b:%d, antes troca",a, b);
	ft_swap(&a, &b);
	printf("\n Valor de a:%d e b:%d, pois troca",a, b);
	return 0;
}
*/