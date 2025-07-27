/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: liferrei <liferrei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/22 14:50:06 by liferrei          #+#    #+#             */
/*   Updated: 2025/07/27 14:05:59 by liferrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_number_len(int number);
static void		*ft_num_char(char *s, int sign, unsigned int num, size_t len);

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
	return (number_len);
}

static void	*ft_num_char(char *s, int sign, unsigned int num, size_t len)
{
	size_t	i;

	i = len;
	while (i--)
	{
		s[i + sign] = (num % 10) + '0';
		num /= 10;
	}
	s[len + sign] = '\0';
	if (sign == 1)
		s[0] = '-';
	return (s);
}

char	*ft_itoa(int n)
{
	unsigned int	number;
	int				sign;
	size_t			number_len;
	char			*number_char;

	number_len = 0;
	number = 0;
	sign = 0;
	number = n;
	if (n < 0)
	{
		number = (unsigned int)-n;
		sign = 1;
	}
	number_len = ft_number_len(number);
	number_char = ft_calloc((number_len + sign + 1), sizeof(char));
	if (!number_char)
		return (NULL);
	ft_num_char(number_char, sign, number, number_len);
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