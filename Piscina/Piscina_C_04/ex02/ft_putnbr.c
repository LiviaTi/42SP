/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: liferrei <liferrei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/02 23:40:29 by liferrei          #+#    #+#             */
/*   Updated: 2025/04/02 23:47:06 by liferrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putnbr(int nb)
{
	int	resul;

	resul = 0;
	if (nb == -2147483648)
	{
		ft_putnbr(nb / 10);
		write(1, "8", 1);
		return ;
	}
	if (nb < 0)
	{
		write(1, "-", 1);
		nb = -nb;
	}
	if (nb > 9)
	{
		ft_putnbr(nb / 10);
	}
	resul = (nb % 10) + '0';
	write(1, &resul, 1);
}

/*
int main (void)
{
    ft_putnbr(-2147483648);
    return (0);
}
*/