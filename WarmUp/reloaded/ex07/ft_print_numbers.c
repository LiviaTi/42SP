/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: liferrei <liferrei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/08 15:23:51 by liferrei          #+#    #+#             */
/*   Updated: 2025/07/10 16:55:43 by liferrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	ft_print_numbers(void)
{
	char	aux;

	aux = '0';
	while (aux <= '9')
	{
		ft_putchar(aux);
		aux++;
	}
}

/*
int	main(void)
{
	ft_print_numbers();
	return 0;
}
*/