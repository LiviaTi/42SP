/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: liferrei <liferrei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/15 10:48:49 by liferrei          #+#    #+#             */
/*   Updated: 2025/07/21 09:24:37 by liferrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	unsigned char	*ptr;

	ptr = (unsigned char *)s;
	while (n--)
	{
		*ptr++ = 0;
	}
}

/*
#include <stdio.h>
int main() {
	char buffer[] = "abcdefghi";
	int i = 0;

	printf("Antes: %s\n", buffer);

	ft_bzero(buffer, sizeof(buffer));

	printf("Depois:");
	while (i < sizeof(buffer)) {
		printf(" %02X", (unsigned char)buffer[i]);
		i++;
	}
	printf("\n");

	return 0;
}
*/
