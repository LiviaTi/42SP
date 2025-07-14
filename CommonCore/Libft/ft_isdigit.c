/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: liferrei <liferrei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/14 12:27:35 by liferrei          #+#    #+#             */
/*   Updated: 2025/07/14 15:40:01 by liferrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isdigit(int a)
{
	if (a >= 0 && a <= 9)
	{
		return (1);
	}
	return (0);
}

/*
#include <stdio.h>
int main(void)
{
	int a = 9;
	int result = 0;

	result = ft_isdigit(a);
	if (result == 1)
	{
		printf("\nThe number is a digit");
	}
	else
	{
		printf("\nThe number is not a digit");
	}
}
*/