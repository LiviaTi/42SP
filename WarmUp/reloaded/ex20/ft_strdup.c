/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: liferrei <liferrei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/09 16:41:00 by liferrei          #+#    #+#             */
/*   Updated: 2025/07/11 16:27:57 by liferrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strdup(char *src)
{
	int		size;
	int		j;
	char	*dup;

	size = 0;
	while (src[size] != '\0')
	{
		size++;
	}
	dup = (char *)malloc(sizeof(char) * (size + 1));
	if (!dup)
	{
		return (NULL);
	}
	j = 0;
	while (j < size)
	{
		dup[j] = src[j];
		j++;
	}
	dup[j] = '\0';
	return (dup);
}
/*
#include <stdio.h>
int main(void)
{
	char src[] = "livia";
	char *copy = ft_strdup(src);

	if(copy == NULL)
	{
		printf("Falha na alocação de memória");
		return (1);
	}
	printf("Original: %s\n", src);
	printf("Cópia: %s\n",copy);

	free(copy);
	return (0);
	
}
*/
