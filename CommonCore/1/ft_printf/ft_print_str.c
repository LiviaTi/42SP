/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_str.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: liferrei <liferrei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/30 17:30:01 by liferrei          #+#    #+#             */
/*   Updated: 2025/08/05 14:24:08 by liferrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	*ft_print_str(char *s)
{
	int count;

	count = 0;
	if (!s)
		write(1 , "null", 4);
	while (*s)
	{
		count++;
		write(1,s++,1);
	}
	return (count);
}
