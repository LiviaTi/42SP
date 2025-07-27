/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: liferrei <liferrei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/15 15:16:49 by liferrei          #+#    #+#             */
/*   Updated: 2025/07/27 14:56:48 by liferrei         ###   ########.fr       */
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
	{
		copy_len = src_len;
	}	
	while (i < copy_len)
	{
		dst[i] = src[i];
		i++;
	}
	dst[copy_len] = '\0';
	return (src_len);
}
