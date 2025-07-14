/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: liferrei <liferrei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/18 15:13:04 by liferrei          #+#    #+#             */
/*   Updated: 2025/03/24 14:46:33 by liferrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_ultimate_div_mod(int *a, int *b);

void	ft_ultimate_div_mod(int *a, int *b)
{
	int		valor_div;
	int		valor_resto;

	valor_div = *a / *b;
	valor_resto = *a % *b;
	*a = valor_div;
	*b = valor_resto;
}

/*
#include <stdio.h>
int main()
{
    int a = 25;
    int b = 6;
    printf("%d", a );
    printf("\n");
    printf("%d", b);
    printf("\n");
    ft_ultimate_div_mod(&a, &b);
    printf("%d", a);
    printf("\n");
    printf("%d", b);
    printf("\n");
}
*/