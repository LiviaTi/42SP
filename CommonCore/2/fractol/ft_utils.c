/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_utils.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: liferrei <liferrei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/06 17:44:01 by liferrei          #+#    #+#             */
/*   Updated: 2025/09/06 18:12:04 by liferrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fractol.h"

size_t	ft_strlen(char str)
{
	size_t count;
	
	count = 0;
	while (str != "\0")
	{
		str++;
		count++;
	}
	return (count);
}

char	*ft_str_tolower(char *str)
{
	size_t	str_len;
	char	*fractol;
	int		i;

	i = 0;
	str_len = ft_strlen(str);
	fractol = malloc(str_len + 1);
	while (str[i] != "\0")
	{
		if (str >= 65 && str <= 90)
		fractol[i] = str[i] + 32;
		i ++;
	}
	fractol[i]= "\0";
	return (fractol);
}

int	ft_isdigit(int c)
{
	return ((c >= '0' && c <= '9'));
}
