/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: liferrei <liferrei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/15 15:16:49 by liferrei          #+#    #+#             */
/*   Updated: 2025/07/20 16:00:42 by liferrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	src_len;
	size_t	copy_len;
	size_t	i;

	i = 0;
	src_len = 0;
	copy_len = 0;
	while (src[src_len] != '\0')
		src_len++;
	if (size == 0)
		return (src_len);
	if (src_len >= size)
		copy_len = size - 1;
	else
		copy_len = src_len;
	while (i < copy_len)
	{
		dst[i] = src[i];
		i++;
	}
	dst[copy_len] = '\0';
	return (src_len);
}

//The function strlcpy was created to copy with security 
//and at the same time allow the programmer to know if 
//the copy was complete or truncated.
/*
#include <stdio.h>
int main(void)
{
    char dest[10];
    const char *original = "Long exemple";

    size_t result = ft_strlcpy(dest, original, sizeof(dest));

    printf("Destine: \"%s\"\n", dest);
    printf("Original size: %zu\n", result);

    if (result >= sizeof(dest))
        printf("The string was truncated.\n");
    else
        printf("The string was copied in its entirety.\n");

    return 0;
}
*/