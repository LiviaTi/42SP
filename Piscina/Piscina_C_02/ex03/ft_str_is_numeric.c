/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: liferrei <liferrei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/25 16:36:58 by liferrei          #+#    #+#             */
/*   Updated: 2025/03/25 17:30:00 by liferrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_numeric(char *str);

int	ft_str_is_numeric(char *str)
{
	int	i;

	i = 0;
	if (!(*str))
	{
		return (1);
	}
	while (*str)
	{
		if (!((str[i] >= '0') && (str[i] <= '9')))
		{
			return (0);
		}
		str++;
	}
	return (1);
}

/*
#include <stdio.h>
int main()
{
	char str[] ="banana";

	printf("%d",ft_str_is_numeric(str));
}
*/