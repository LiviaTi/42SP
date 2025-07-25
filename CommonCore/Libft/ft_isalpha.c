/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: liferrei <liferrei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/14 12:28:19 by liferrei          #+#    #+#             */
/*   Updated: 2025/07/20 14:34:38 by liferrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isalpha(int a)
{
	return ((a >= 97 && a <= 122) || (a >= 65 && a <= 90));
}

/*
#include <stdio.h>
 int main(void)
 {
	int letter = '@';
	int result = 0;

	result = ft_isalpha(letter);

	if (result == 1)
	{
		printf("\n It's a letter of the alphabet");
	}
	else 
	{
		printf("\n It is not a letter of the alphabet");
	}
 }
*/