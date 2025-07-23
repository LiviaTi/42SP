/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: liferrei <liferrei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/22 14:50:06 by liferrei          #+#    #+#             */
/*   Updated: 2025/07/23 18:53:37 by liferrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_number_len(int number)
{
	size_t	number_len;

	number_len = 0;
	if (number == 0)
		return (1);
	while (number != 0)
	{
		number /= 10;
		number_len++;
	}
	return(number_len);
}

char	*ft_itoa(int n)
{
	unsigned int	number;
	int				sign;
	size_t			number_len;
	char			*number_char;
	size_t			i;
	
	number_len = 0;
	i = 0;
	number = 0;
	sign = 0;
	
	if (n < 0)
	{
		number = (unsigned int)-n;
		sign = 1;
	}
	else
	number = n;
	number_len = ft_number_len(number);
	number_char = malloc ( number_len + sign + 1);
	if(!number_char)
		return (NULL);
	while (number_len--)
	{
		number_char[number_len + sign] = (number % 10) + '0';
		number /= 10;
    }
	number_char[number_len + sign] = '\0';
	if(sign == 1)
		number_char[0] = '-';
	return (number_char);
}

/*
#include <stdio.h>
int main(void)
{
	int number =-123456;
	char *number_char;

	number_char = ft_itoa(number);

	printf("%s",number_char);
	free(number_char);
	return (0);
}
*/