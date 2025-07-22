/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: liferrei <liferrei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/18 11:03:09 by liferrei          #+#    #+#             */
/*   Updated: 2025/07/21 09:42:35 by liferrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*ptr_dup;
	size_t	i;
	size_t	size;

	i = 0;
	size = ft_strlen(s);
	ptr_dup = malloc(size + 1);
	if (s[i] == '\0')
		return (NULL);
	while (s[i] != '\0')
	{
		ptr_dup[i] = s[i];
		i++;
	}
	ptr_dup[i] = '\0';
	return (ptr_dup);
}
/*char	*ft_strdup(const char *s)
#include <stdio.h>

int main(void)
{
	const char *original = "Hello, world!";
	char *dup;

	dup = ft_strdup(original);

	if (dup == NULL)
	{
		printf("Memory allocation failed.\n");
		return 1;
	}

	printf("Original string: %s\n", original);
	printf("Copied string:   %s\n", dup);

	free(dup);

	return (0);
}
*/