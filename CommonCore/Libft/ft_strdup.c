/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: liferrei <liferrei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/18 11:03:09 by liferrei          #+#    #+#             */
/*   Updated: 2025/07/18 14:27:30 by liferrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strdup(const char *s)
{
	char	*ptrCopy;
	size_t	i;
	size_t	size;

	size = ft_strlen(s);
	ptrCopy = malloc(size);
	if (s[i] == '\0')
	{
		return (NULL);
	}
	while(s[i] != '\0')
	{
		ptrCopy[i] = s[i];
		i++;
	}
}

#include <stdio.h>
int main (void)
{
	const char original[] = "livia";
	char *copy;
	size_t	size;
	size_t	i;
	
	size = ft_strlen(original);
	copy = ft_strdup(original);

	printf("%s", copy);
	
	free(copy);
}