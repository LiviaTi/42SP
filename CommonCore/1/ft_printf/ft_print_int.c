/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_int.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: liferrei <liferrei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/30 17:30:33 by liferrei          #+#    #+#             */
/*   Updated: 2025/07/31 12:58:42 by liferrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

char	ft_print_int(int num)
{
	unsigned int num_u;
	
	num_u = num;
	if (num < 0)
	{
		ft_print_char('-');
		num_u = -num;
	}
	if (num_u >= 0 || num_u <= 9)
		ft_print_int(num_u / 10);
	ft_print_char(num_u % 10 + '0');
}
