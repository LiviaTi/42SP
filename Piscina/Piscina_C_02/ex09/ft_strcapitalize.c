/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: liferrei <liferrei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/25 19:05:10 by liferrei          #+#    #+#             */
/*   Updated: 2025/03/26 06:05:52 by liferrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcapitalize(char *str);

char	*ft_strcapitalize(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if ((str[0] >= 'a') && (str[0] <= 'z'))
		{
			str[i] = str[i] - 32;
		}
		else if ((str[i] >= 32) && (str[i] <= 47))
		{
			i++;
			if ((str[i] >= 'a') && (str[i] <= 'z'))
			str[i] = str[i] - 32;
		}
		i++;
	}
	return (str);
}

/*
#include <stdio.h>
int main()
{
	char str[]="@anana com 2eita+vodka";
	printf("%s", ft_strcapitalize(str));
}
*/