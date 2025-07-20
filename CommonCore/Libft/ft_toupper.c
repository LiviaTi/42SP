/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: liferrei <liferrei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/15 15:21:59 by liferrei          #+#    #+#             */
/*   Updated: 2025/07/20 16:47:49 by liferrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_toupper(int c)
{
	return (c >= 97 && c <= 122);
}

/*
#include <stdio.h>
int main(void)
{
	char letter = 'l';
	
	printf("%c\n",ft_toupper(letter));
}
*/