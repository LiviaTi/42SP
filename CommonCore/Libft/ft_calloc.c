/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: liferrei <liferrei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/18 09:03:00 by liferrei          #+#    #+#             */
/*   Updated: 2025/07/18 11:42:05 by liferrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_calloc(size_t nmemb, size_t size)
{
	
	size_t	total;
	void	*ptr;

	total = nmemb * size;
	ptr = malloc(total);
	if (nmemb == 0 || size == 0)
		return (NULL);
	if (total / nmemb != size)
		return NULL;
	if (ptr == NULL)
		return (NULL);
	ft_memset(ptr, 0, total);
	return (ptr);
}
/*
#include <stdio.h>
int main(void)
{
	int	i;
	int *v = (void *)ft_calloc(5, sizeof(int));

	i = 0;
	if (*v == NULL) 
	{
		printf("Error allocating memory.\n");
		return 1;
	}
	while (i < 5)
	{
		printf("v[%d] = %d\n", i, v[i]);
		i++;
	}
	free(v);
	return (0);
}
*/