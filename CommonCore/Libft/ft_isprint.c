/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: liferrei <liferrei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/14 15:55:01 by liferrei          #+#    #+#             */
/*   Updated: 2025/07/14 16:00:45 by liferrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isprint(int a)
{
	return (a >= 32 && a < 127);
}

/*
#include <stdio.h>
int main(void)
{
	int a = 127;
	int result = 0;

	result = ft_isprint(a);

	if(result == 1)
	{
		printf("It's a print");
	}
	else
	{
		printf(" It's a not print ");
	}
}
*/