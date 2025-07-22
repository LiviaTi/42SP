/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: liferrei <liferrei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/18 09:03:00 by liferrei          #+#    #+#             */
/*   Updated: 2025/07/21 10:27:00 by liferrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	size_t	total;
	void	*ptr;

	total = nmemb * size;
	if (nmemb != 0 && (total / nmemb != size))
		return (NULL);
	ptr = malloc(total);
	if (!ptr)
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