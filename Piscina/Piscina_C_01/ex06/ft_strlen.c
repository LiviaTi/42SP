/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: liferrei <liferrei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/18 16:24:38 by liferrei          #+#    #+#             */
/*   Updated: 2025/03/24 14:50:07 by liferrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str);

int	ft_strlen(char *str)
{
	int	count;

	count = 0;
	while (*str)
	{
		str++;
		count++;
	}
	return (count);
}

/*
#include <stdio.h>
int main()
{
	char *str;
	str = "banana";
	int lenght;
	lenght = ft_strlen(str);
	printf("O tamanho da palavra é %d", lenght);
	return 0;
}
*/