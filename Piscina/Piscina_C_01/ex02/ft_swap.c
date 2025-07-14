/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: liferrei <liferrei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/17 23:38:42 by liferrei          #+#    #+#             */
/*   Updated: 2025/03/24 14:39:04 by liferrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_swap(int *a, int *b);

void	ft_swap(int *a, int *b)
{
	int	x;

	x = *a;
	*a = *b;
	*b = x;
}

/*
#include <stdio.h>
int main()
{
    int a = 32;
    int b = 42;
    printf("%d", a);
    printf("\n");
    printf("%d", b);
    printf("\n");
    ft_swap(&a, &b);
    printf("%d", a);
    printf("\n");
    printf("%d", b);
    printf("\n");
}
*/