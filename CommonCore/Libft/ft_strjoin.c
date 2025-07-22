/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: liferrei <liferrei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/22 13:41:11 by liferrei          #+#    #+#             */
/*   Updated: 2025/07/22 14:41:54 by liferrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char *str3;
	size_t	s1_len;
	size_t	s2_len;
	size_t	i;
	size_t	j;
	
	i = 0;
	j = 0;
	if (!s1 || !s2)
		return (NULL);
	s1_len = ft_strlen(s1);
	s2_len = ft_strlen(s2);
	str3 = malloc (s1_len + s2_len + 1);
	if (!str3)
		return(NULL);
	while(s1[i] != '\0')
	{
		str3[i] = s1[i];
		i++;
	}
	while(s2[j] != '\0')
	{
		str3[i + j] = s2[j];
		j++;
	}
	str3[i + j] = '\0';

	return(str3);
}

/*
#include <stdio.h>

int main(void)
{
	char const str1[] = "livia";
	char const str2[] = "Davi";
	char *str3;
	
	str3 = ft_strjoin(str1,str2);
	

	if (str3)
    {
		printf("\n%s\n", str3);
		free(str3);
	}
	else
	{
		printf("\nError allocating memorry\n");
	}

	return (0);
}
	*/
