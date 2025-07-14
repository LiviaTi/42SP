/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: liferrei <liferrei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/25 19:26:06 by liferrei          #+#    #+#             */
/*   Updated: 2025/03/27 17:19:03 by liferrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size);

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	count;

	i = 0;
	count = 0;
	while (i < size && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
		count++;
	}
	dest[i] = '\0';
	while (i < size)
	{
		dest[i] = '\0';
		i++;
	}
	src = dest ;
	return (count);
}
/*
#include <stdio.h>

int main ()
{
	char src[] ="banana";
	int size;
	char dest[6];

	size = 4;
	
	printf("%d",ft_strlcpy(dest, src, size));
	printf("\n");
	printf("%s", dest);
}
*/