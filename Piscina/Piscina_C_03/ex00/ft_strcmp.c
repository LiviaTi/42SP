/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: liferrei <liferrei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/31 15:52:45 by liferrei          #+#    #+#             */
/*   Updated: 2025/04/01 20:45:46 by liferrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char *s1, char *s2);

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] != '\0' && s2[i] != '\0')
	{
		if (s1[i] != s2[i])
		{
			return (s1[i] - s2[i]);
		}
		i++;
	}
	return (s1[i] - s2[i]);
}

/*
#include <stdio.h>
int main()
{
	char s1[] = "banana";
	char s2[] = "ban";
	int resultado;

	resultado = ft_strcmp(s1, s2);

	if (resultado == 0)
	{
		printf("%s é igual a %s", s1, s2);
		return (0);
	}
	else if (resultado > 0)
	{
		printf("%s a letra diferente é maior %s", s1, s2);
		return (0);
	}
	else
	{
		printf("%s a letra diferente é menor %s", s1, s2);
		return (0);
	}
	
}
*/