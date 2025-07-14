/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: liferrei <liferrei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/31 15:51:21 by liferrei          #+#    #+#             */
/*   Updated: 2025/04/01 17:11:06 by liferrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcat(char *dest, char *src);

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	len_dest;

	len_dest = 0;
	i = 0;
	while (dest[i] != '\0')
	{
		len_dest += 1;
		i++;
	}
	i = 0;
	while (src[i] != '\0')
	{
		dest[len_dest + i] = src[i];
		i++;
	}
	dest[len_dest + i] = '\0';
	return (dest);
}

/*
#include <stdio.h>
int main()
{
	char dest[] = "banana";
	char src[] = "cafe";

	ft_strcat(dest,src);

	printf("%s",dest);
	return (0);
}
*/
