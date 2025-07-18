/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: liferrei <liferrei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/15 11:48:00 by liferrei          #+#    #+#             */
/*   Updated: 2025/07/16 12:06:01 by liferrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t len)
{
	size_t				i;
	unsigned char		*d;
	const unsigned char	*s;

	d = (unsigned char *)dest;
	s = (const unsigned char *)src;
	i = 0;
	while (i < len)
	{
		d[i] = s[i];
		i++;
	}
	return (dest);
}

/*
#include <stdio.h>
int main (void)
{
	char src[] = "livia";
	char dest[20];
	int i;

	i = 0;
	while ( i < 20)
	{
		dest[i] = '-';
		i++;
	}
    printf("Before ft_memcpy:\n");
    printf("src:  \"%s\"\n", src);
    printf("dest: \"%s\"\n", dest);

    ft_memcpy(dest, src, 12);

    printf("\nAfter ft_memcpy:\n");
    printf("src:  \"%s\"\n", src);
    printf("dest: \"%s\"\n", dest);

    return 0;
}
*/