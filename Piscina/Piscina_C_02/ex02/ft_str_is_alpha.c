/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: liferrei <liferrei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/25 15:43:33 by liferrei          #+#    #+#             */
/*   Updated: 2025/03/27 18:39:46 by liferrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_alpha(char *str);

int	ft_str_is_alpha(char *str)
{
	int	i;

	i = 0;
	if (str[i] == '\0')
	{
		return (1);
	}
	while (*str)
	{
		if (!(((str[i] >= 'a') && (str[i] <= 'z'))
				|| ((str[i] >= 'A') && (str[i] <= 'Z'))))
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
	char str[] = "AAAAAAAAAAAAa ";
	printf("%d", ft_str_is_alpha(str));
}
*/
