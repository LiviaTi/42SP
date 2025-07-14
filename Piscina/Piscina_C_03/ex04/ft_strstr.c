/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: liferrei <liferrei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/31 16:25:46 by liferrei          #+#    #+#             */
/*   Updated: 2025/04/01 20:25:04 by liferrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find);

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	if (*str == '\0' && *to_find == '\0')
		return ((void *)0);
	if (*to_find == '\0')
		return (str);
	while (str[i] != '\0' )
	{
		while (str[i + j] == to_find[j])
		{
			if (to_find[j + 1] == '\0')
				return (str + i);
			j++;
		}
		i++;
	}
	return ((void *)0);
}
/*
#include <stdio.h>
int main(int argc, char *argv[])
{
	if(argc == 3)
	{
		printf ("%s",ft_strstr(argv[1], argv[2]));
		printf ("\n");
	}
	return 0;
}
*/