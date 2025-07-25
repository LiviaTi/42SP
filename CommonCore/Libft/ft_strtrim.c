/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: liferrei <liferrei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/22 14:43:18 by liferrei          #+#    #+#             */
/*   Updated: 2025/07/25 12:13:48 by liferrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strtrim(char const *s1, char const *set)
{
	char			*str_no_caracter;
	size_t			str_no_caracter_len;
	unsigned int	start;
	size_t			i;

	i = 0;
	while (*s1 != '\0')
	{
		while (*set != '\0')
		{
			if ()
			set++;
		}
		s1++;
	}
	
	ft_substr(str_no_caracter, start, size_t len);
	return (str_no_caracter);
}

#include <stdio.h>
int main (void)
{
	char *str_no_caracter;
	char s1[] = "oiiiXoi Livia Ferreira, oiXoiio";
	char set[] = "oi";

	str_no_caracter = ft_strtrim(s1, set);
	
	free(str_no_caracter);
	return (0);
}