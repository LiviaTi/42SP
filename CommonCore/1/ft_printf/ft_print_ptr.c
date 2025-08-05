/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_ptr.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: liferrei <liferrei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/30 17:34:13 by liferrei          #+#    #+#             */
/*   Updated: 2025/08/05 17:03:21 by liferrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	*ft_print_ptr(void *s)
{
	int count;

	count = 0;
	if (!s)
		write(1 , "(nil)", 5);
/*
		while (*s)
	{
		count++;
		write(1,&s,1);
		
	}
*/
	return (count);
}
