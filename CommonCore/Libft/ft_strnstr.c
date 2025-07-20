/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: liferrei <liferrei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/20 17:23:45 by liferrei          #+#    #+#             */
/*   Updated: 2025/07/20 17:34:24 by liferrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;
	int		found;

	found = 0;
	i = 0;
	j = 0;
	if (*needle == '\0')
		return ((char *)haystack);
	while (i < len && haystack[i] != '\0')
	{
		if (haystack[i] == needle[0])
		{
			found = 1;
			while (needle[j] != '\0' && (i + j) < len)
			{
				if (haystack[i + j] != needle[j])
					found = 0;
				j++;
			}
			if (found && needle[j] == '\0')
				return ((char *)(haystack + i));
		}
		i++;
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
