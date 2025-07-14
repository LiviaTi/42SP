/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: liferrei <liferrei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/25 17:31:29 by liferrei          #+#    #+#             */
/*   Updated: 2025/03/25 17:33:59 by liferrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_uppercase(char *str);

int	ft_str_is_uppercase(char *str)
{
	if (!(*str))
	{
		return (1);
	}
	while (*str)
	{
		if (!((*str >= 'A') && (*str <= 'Z')))
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
	char str[] = "ABf";
	printf("%d", ft_str_is_uppercase(str));
}
*/