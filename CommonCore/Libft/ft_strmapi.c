/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: liferrei <liferrei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/22 14:52:25 by liferrei          #+#    #+#             */
/*   Updated: 2025/07/25 17:34:29 by liferrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char			*new_str;
	unsigned int	i;

	i = 0;
	if (!s || !f)
		return (NULL);
	new_str = calloc(ft_strlen(s) + 1, sizeof(char));
	if (!new_str)
		return (NULL);
	while (s[i])
	{
		new_str[i] = f(i, s[i]);
		i++;
	}
	return (new_str);
}

/*
char my_toupper(unsigned int i, char c)
{
	(void)i;
	return (char)ft_toupper((unsigned char)c);
}
#include <stdio.h>
int main (void)
{
	char str[]= "livia";
    char *result;

    result = ft_strmapi(str, my_toupper);
    if (!result)
    {
        printf("Error alocation memory.\n");
        return 1;
    }
    printf("Original: %s\n", str);
    printf("Modified: %s\n", result);
    free(result);
    return 0;
}
*/