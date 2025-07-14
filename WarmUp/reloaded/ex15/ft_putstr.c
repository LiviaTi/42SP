/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: liferrei <liferrei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/09 09:04:05 by liferrei          #+#    #+#             */
/*   Updated: 2025/07/11 11:07:38 by liferrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*

{
	write(1, &c, 1);
}
*/
#include <unistd.h>

void	ft_putchar(char c);

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		ft_putchar(str[i]);
		i++;
	}	
}

/*
int main(void)
{
	char str[] = "livia";

	ft_putstr(str);
	return (0);
}
*/