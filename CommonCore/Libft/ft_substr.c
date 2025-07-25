/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: liferrei <liferrei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/18 14:32:55 by liferrei          #+#    #+#             */
/*   Updated: 2025/07/25 13:27:07 by liferrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	s_len;
	size_t	i;
	size_t	max_len;
	char	*sub_str;

	i = 0;
	s_len = ft_strlen(s);
	if (start > s_len)
		return ((char *) malloc(1));
	max_len = s_len - start;
	if (len > max_len)
		len = max_len;
	sub_str = ft_calloc((len + 1), sizeof(char));
	if (!sub_str)
		return (NULL);
	ft_memcpy(sub_str, (s + start), len);
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