/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: liferrei <liferrei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/08 14:56:05 by liferrei          #+#    #+#             */
/*   Updated: 2025/07/10 16:54:04 by liferrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	ft_print_alphabet(void)
{
	char	aux;

	aux = 'a';
	while (aux <= 'z')
	{
		ft_putchar(aux);
		aux++;
	}
}

/*
int	main(void)
{
	ft_print_alphabet();
	return 0;
}
*/
