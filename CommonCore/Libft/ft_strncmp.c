/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: liferrei <liferrei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/15 17:04:57 by liferrei          #+#    #+#             */
/*   Updated: 2025/07/16 18:39:47 by liferrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t len)
{
	size_t			i;
	unsigned char	*c1;
	unsigned char	*c2;

	c1 = (unsigned char *)s1;
	c2 = (unsigned char *)s2;
	i = 0;
	if (len == 0)
	{
		return (0);
	}
	while (i < len)
	{
		if (c1[i] != c2[i] || c1[i] == '\0' || c2[i] == '\0')
		{
			return (c1[i] - c2[i]);
		}
		i++;
	}
	return (0);
}

/*
#include <stdio.h>
int main(void)
{
	const char str1[] = "livia";
	const char str2[] = "lividih";
	int result = 0;

	result = ft_strncmp(str1, str2, 3);
	if (result == 0)
	{
		printf("Even the size passed to the string is equal");
	}
	else
	{
		printf("Even the size passed to the string is not equal");
	}
}
*/