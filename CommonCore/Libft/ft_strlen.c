/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: liferrei <liferrei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/14 16:01:12 by liferrei          #+#    #+#             */
/*   Updated: 2025/07/14 18:39:25 by liferrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlen(char *str)
{
	unsigned int	len;

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