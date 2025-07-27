/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: liferrei <liferrei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/15 11:48:00 by liferrei          #+#    #+#             */
/*   Updated: 2025/07/25 17:52:59 by liferrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char		*d;
	const unsigned char	*s;

	d = (unsigned char *)dest;
	s = (const unsigned char *)src;
	if (!dest && !src)
		return (NULL);
	while (n--)
	{
		*d = *s;
		d++;
		s++;
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

    ft_memcpy(dest, src, sizeof(src));

    printf("\nAfter ft_memcpy:\n");
    printf("src:  \"%s\"\n", src);
    printf("dest: \"%s\"\n", dest);

    return 0;
}
*/
