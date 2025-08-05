/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_uint.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: liferrei <liferrei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/30 17:31:24 by liferrei          #+#    #+#             */
/*   Updated: 2025/08/05 14:35:16 by liferrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"


void	ft_print_char(char c);

int	ft_print_int(unsigned int num)
{
	int	count;

	count = 0;
	if (num < 0)
	{
		ft_print_char('-');
		count++;
	}
	if (num >= 0 || num <= 9)
	{
		ft_print_int(num / 10);
		count++;
	}
	ft_print_char(num % 10 + '0');
	return (count);
}
