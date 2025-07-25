/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: liferrei <liferrei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/18 11:03:09 by liferrei          #+#    #+#             */
/*   Updated: 2025/07/25 10:32:50 by liferrei         ###   ########.fr       */
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
	ptr_dup = ft_calloc((size + 1), sizeof(char));
	if (!ptr_dup)
		return (NULL);
	while (s[i] != '\0')
	{
		ptr_dup[i] = s[i];
		i++;
	}
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