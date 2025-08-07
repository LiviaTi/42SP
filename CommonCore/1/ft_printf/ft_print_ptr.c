/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_ptr.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: liferrei <liferrei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/30 17:34:13 by liferrei          #+#    #+#             */
/*   Updated: 2025/08/07 11:22:39 by liferrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_str(char *s);
int	ft_print_hex(unsigned int num, int uppercase);

int	ft_print_ptr(unsigned long ptr)
{
	int	count;

	count = 0;
	if (ptr == 0)
		return (ft_print_str("0x0"));
	count += ft_print_str("0x");
	count += ft_print_hex(ptr, 1);
	return (count);
}
