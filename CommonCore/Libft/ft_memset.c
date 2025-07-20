/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: liferrei <liferrei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/14 17:14:00 by liferrei          #+#    #+#             */
/*   Updated: 2025/07/20 17:20:52 by liferrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	unsigned char	*ptr;

	ptr = (unsigned char *)s;
	while (n--)
	{
		*ptr = (unsigned char)c;
		ptr++;
	}
	return (s);
}

/*
#include <stdio.h>
int main() {
    char buffer[5];

    ft_memset(buffer, 'A', 5);

    for (int i = 0; i < 5; i++) {
        printf("buffer[%d] = %c (ASCII %d)\n", i, buffer[i], buffer[i]);
    }

    return 0;
}
*/