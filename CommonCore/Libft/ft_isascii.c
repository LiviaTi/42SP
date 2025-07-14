/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: liferrei <liferrei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/14 15:45:09 by liferrei          #+#    #+#             */
/*   Updated: 2025/07/14 15:53:56 by liferrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isascii(int a)
{
	return (a >= 0 && a <= 127);
}

/*
#include <stdio.h>
int main(void)
{
	int a = 200;
	int result = 0;

	result = ft_isascii(a);

	if(result == 1)
	{
		printf("It's a Ascii");
	}
	else
	{
		printf(" It's a not Ascii ");
	}
}
*/