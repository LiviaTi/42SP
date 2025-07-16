/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: liferrei <liferrei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/15 15:52:35 by liferrei          #+#    #+#             */
/*   Updated: 2025/07/16 18:34:01 by liferrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	str_lendst;
	size_t	str_len;
	size_t	str_lensrc;

	i = 0;
	str_lendst = 0;
	str_len = 0;
	str_lensrc = 0;
	while (dst[str_lendst] != '\0')
	{
		str_lendst++;
	}
	if (size == 0 || src == '\0')
	{
		return (str_lendst);
	}
	while (src[str_lensrc] != '\0')
	{
		str_lensrc++;
	}
	str_len = ((str_lendst-1) + (str_lensrc-1));

	return(str_len);

}
#include <stdio.h>
int main(void)
{
	char dst[] = "livia";
	const char src[] = "davi";

	printf("The size of the strlcat is: %ld",ft_strlcat(dst,src,2));
}