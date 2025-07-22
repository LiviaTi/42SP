/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: liferrei <liferrei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/20 17:23:45 by liferrei          #+#    #+#             */
/*   Updated: 2025/07/21 10:31:41 by liferrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	little_len;

	little_len = ft_strlen(little);
	if (*little == '\0')
		return ((char *)big);
	if (little_len > len)
		return (NULL);
	while (*big && len >= little_len)
	{
		if (ft_strncmp (big, little, little_len) == 0)
			return ((char *)big);
		big++;
		len--;
	}
	return (NULL);
}

/*
#include <stdio.h>
int main(void)
{
    const char *text = "Hello, world!";
    const char *search = "world";
    size_t len = 12;

    char *result = ft_strnstr(text, search, len);
    if (result)
        printf("Found: %s\n", result);
    else
        printf("Not found\n");

    return 0;
}
*/
