/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: liferrei <liferrei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/14 16:01:12 by liferrei          #+#    #+#             */
/*   Updated: 2025/07/15 13:03:39 by liferrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen(const char *str)
{
	size_t	len;

	len = 0;
	while (str[len] != '\0')
	{
		len++;
	}
	return (len);
}

/*
#include <stdio.h>
int main(int argc, char *argv[])
{
	int i;

	i = 1;
	while (i < argc)
	{
		printf("\n The size of the string is %d", ft_strlen(argv[i]));
		i++;
	}
	return (0);
}
*/