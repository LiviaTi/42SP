/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: liferrei <liferrei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/15 15:16:49 by liferrei          #+#    #+#             */
/*   Updated: 2025/07/16 15:24:24 by liferrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	src_len;

	src_len = 0;
	i = 0;
	if (size == 0)
	{
		return (src_len);
	}
	while (src[i] != '\0' && i < (size - 1))
	{
			dst[i] = src[i];
			i++;
			src_len++;
	}
	dst[i] = '\0';
	return (src_len);
}
/*
#include <stdio.h>
int main(void)
{
	char dst[20];
	const char src[] = "livihdhe";
	size_t result = 0; 

	result = ft_strlcpy(dst,src,5);

	printf("O tamanho do strlcpy %ld",result);

	return 0;
}
*/
