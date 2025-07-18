/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: liferrei <liferrei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/15 10:48:49 by liferrei          #+#    #+#             */
/*   Updated: 2025/07/18 12:03:49 by liferrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t len)
{
	ft_memset(s,0,len);
}
/*
#include <stdio.h>

int main(void)
{
    char str[] = "Olá, mundo!";

    printf("Before: %s\n", str);
    ft_bzero(str+2, 7);
    printf("After: %s\n", str);

    return 0;
}
*/