/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: liferrei <liferrei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/14 17:14:00 by liferrei          #+#    #+#             */
/*   Updated: 2025/07/16 13:03:30 by liferrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t len)
{
	unsigned char	*ptr;
	size_t			i;

	ptr = (unsigned char *)s;
	i = 0;
	while (i < len)
	{
		ptr[i] = (unsigned char)c;
		i++;
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