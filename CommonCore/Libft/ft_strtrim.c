/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: liferrei <liferrei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/22 14:43:18 by liferrei          #+#    #+#             */
/*   Updated: 2025/07/25 13:28:31 by liferrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_is_in_set(char c, const char *set)
{
	while (*set)
	{
		if (c == *set)
			return (1);
		set++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	start;
	size_t	end;
	char	*str_no_character;

	if (!s1 || !set)
		return (NULL);
	start = 0;
	while (s1[start] && ft_is_in_set(s1[start], set))
		start++;
	end = ft_strlen(s1);
	while (end > start && ft_is_in_set(s1[end - 1], set))
		end--;
	str_no_character = ft_substr(s1, start, end - start);
	return (str_no_character);
}

/*
#include <stdio.h>
int main (void)
{
	char *str_no_character;
	char s1[] = "oiiiXoi Livia Ferreira, oiXoiio";
	char set[] = "oi";

	str_no_character = ft_strtrim(s1, set);
	printf("%s", str_no_character);
	free(str_no_character);
	return (0);
}
*/