/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: liferrei <liferrei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/18 14:32:55 by liferrei          #+#    #+#             */
/*   Updated: 2025/07/21 12:49:00 by liferrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	char	*sub_str;
	size_t	s_len;
	size_t	available_mem_space;

	i = 0;
	s_len = ft_strlen(s);
	available_mem_space = s_len - start;
	if (*s == '\0')
		return (NULL);
	if (len > available_mem_space)
		len = available_mem_space;
	sub_str = (char *) malloc(len + 1);
	while (!sub_str)
	{
		sub_str[i] = s[start + i];
		i++;
	}
	sub_str[i] = '\0';
	return (sub_str);
}

/*
#include <stdio.h>
int main(void)
{
	char original[]= "Livia Ferreira";
	unsigned int start = 2;
	char *sub_string;
	
	sub_string = ft_substr(original,start,6);

	printf("Original string: %s", original);
	printf("\nSub string: %s", sub_string);
	
	free(sub_string);
	return 0;
}
*/