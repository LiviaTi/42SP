/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: liferrei <liferrei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/14 12:47:12 by liferrei          #+#    #+#             */
/*   Updated: 2025/07/14 15:38:41 by liferrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(int a)
{
	return (ft_isalpha(a) || ft_isdigit(a));
}

/*
#include <stdio.h>
int main(void)
{
	int var = 'A';
	int result = 0;

	result = ft_isalnum(var);
	if(result == 1)
	{
		printf("\n It is alphanumeric");
	}
	else
	{
		printf("\n It is not alphanumeric");
	}
}
*/