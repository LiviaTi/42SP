/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: liferrei <liferrei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/17 12:41:13 by liferrei          #+#    #+#             */
/*   Updated: 2025/07/25 15:20:12 by liferrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *nptr)
{
	int		convert;
	size_t	i;
	int		sign;

	sign = 1;
	i = 0;
	convert = 0;
	while (nptr[i] == 32 || (nptr[i] >= 9 && nptr[i] <= 13))
		i++;
	if (nptr[i] == '-' || nptr[i] == '+')
	{
		if (nptr[i] == '-')
			sign = -1;
		i++;
	}
	while ((nptr[i] >= '0') && (nptr[i] <= '9'))
	{
		convert = convert * 10 + (nptr[i] - '0');
		i++;
	}
	return (convert * sign);
}

/*
#include <stdio.h>
int main(void)
{
	char str[] = "1234";

	printf("The number is: %d", ft_atoi(str));
	return (0);
}
*/