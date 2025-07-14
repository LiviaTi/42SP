/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: liferrei <liferrei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/02 23:41:27 by liferrei          #+#    #+#             */
/*   Updated: 2025/04/02 23:47:48 by liferrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


int	ft_atoi(char *str)
{
	int	i;
	int	positive;
	int	resul;

	i = 0;
	positive = 1;
	resul = 0;
	while (str[i] == ' ' || (str[i] >= 9 && str[i] <= 13))
	i++;
	while (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			positive = -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		resul = resul * 10 + (str[i] - '0');
		i++;
	}
	return (resul * positive);
}

/*
#include <stdio.h>
int main (void)
{
    char str[] = "-+-2\34/ab567/";
	int num = ft_atoi(str);
	printf("%d\n", num);
}
*/
