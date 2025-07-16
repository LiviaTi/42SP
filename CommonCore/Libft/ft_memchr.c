/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: liferrei <liferrei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/16 18:40:10 by liferrei          #+#    #+#             */
/*   Updated: 2025/07/16 19:57:35 by liferrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	const unsigned char	*src;
	unsigned char		a;
	size_t				i;

	i = 0;
	src = (const unsigned char *)s;
	a = (unsigned char)c;

	while (n--)
	{
		if (src[i] == c)
		{
			return ((void *)&src[i]);
		}
		i++;
	}
	return (NULL);
}
/*
#include <stdio.h>
int main() {
    char str[] = "Hello, world!";
    int c = 'o';  

    void *result = ft_memchr(str, c, sizeof(str));
    if (result != NULL) {
        printf("Character '%c' found at position %ld\n", c, (unsigned char *)result - (unsigned char *)str);
    } else {
        printf("Character '%c' not found\n", c);
    }
    return 0;
}
*/