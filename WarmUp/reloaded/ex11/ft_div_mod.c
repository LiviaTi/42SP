/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: liferrei <liferrei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/08 16:47:03 by liferrei          #+#    #+#             */
/*   Updated: 2025/07/08 16:47:15 by liferrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}

/*
#include <stdio.h>
int main()
{
    int a = 10;
    int b = 2;
    int div, mod;

    ft_div_mod(a, b, &div, &mod);

    printf("Divisão: %d / %d = %d\n", a, b, div);
    printf("Módulo: %d %% %d = %d\n", a, b, mod);

    return 0;
}
*/