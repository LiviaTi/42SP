/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_hex.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: liferrei <liferrei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/30 17:32:18 by liferrei          #+#    #+#             */
/*   Updated: 2025/08/05 17:15:05 by liferrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

int	ft_print_hex(unsigned int num, int uppercase)
{
	char	*base;
	char	c;
	int		count;

	count = 0;
	if (uppercase == 1)
		base = "0123456789abcdef";
	if (uppercase == 2)
		base = "0123456789ABCDEF";
	if (num >= 16)
		count += ft_print_hex(num / 16, uppercase);
	c = base[num % 16];
	count += write(1, &c, 1);
	return (count);
}
