/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: liferrei <liferrei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/25 17:34:46 by liferrei          #+#    #+#             */
/*   Updated: 2025/03/27 18:39:14 by liferrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_printable(char *str);

int	ft_str_is_printable(char *str)
{
	if (!(*str))
	{
		return (1);
	}
	while (*str)
	{
		if (!((*str >= 32) && (*str < 127)))
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
	char str[] = " ";
	printf("%d", ft_str_is_printable(str));
}
*/