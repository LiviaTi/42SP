/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: liferrei <liferrei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/25 16:50:52 by liferrei          #+#    #+#             */
/*   Updated: 2025/03/26 00:28:48 by liferrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_lowercase(char *str);

int	ft_str_is_lowercase(char *str)
{
	if (!(*str))
	{
		return (1);
	}
	while (*str)
	{
		if (!((*str >= 'a') && (*str <= 'z')))
		{
			return (0);
		}
		str++;
	}
	return (1);
}

/*
#iclude <stdio.h>
int main()
{
	char str[] = "";
	printf("%d", ft_str_is_lowercase(str));
}
*/
