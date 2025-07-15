/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: liferrei <liferrei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/15 10:48:49 by liferrei          #+#    #+#             */
/*   Updated: 2025/07/15 13:03:18 by liferrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t len)
{
	unsigned char	*ptr;
	size_t			i;

	ptr = (unsigned char *)s;
	i = 0;
	while (i < len)
	{
		ptr[i] = 0;
		i++;
	}
}
/*
#include <stdio.h>

int main(void)
{
    char str[] = "Olá, mundo!";

    printf("Antes: %s\n", str);
    ft_bzero(str+2, 7);
    printf("Depois: %s\n", str);

    return 0;
}
*/