/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: liferrei <liferrei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/16 18:40:10 by liferrei          #+#    #+#             */
/*   Updated: 2025/07/18 12:21:12 by liferrei         ###   ########.fr       */
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
	while (i < n)
	{
		if (src[i] == a)
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
	char s[] = {0, 1, 2 ,3 ,4 ,5};


    void *result = ft_memchr(s, 2, 3);
    if (result != NULL) {
        printf("Character  found at position %ld\n", (unsigned char *)result - (unsigned char *)s);
    } else {
        printf("Character  not found\n");
    }
    return 0;
}
*/
