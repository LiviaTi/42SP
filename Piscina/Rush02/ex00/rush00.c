/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                            :+:      :+:    :+:  */
/*                                                    +:+ +:+          +:+    */
/*   By: perferre <perferre@student.42.fr>           +#+  +:+        +#+      */
/*   By: liferrei <liferrei@student.42.fr>          +#+   +:+      +#+        */
/*   By: diegofer <diegofer@student.42.fr>         +#+    +:+    +#+          */
/*                                                +#+#+#+#+#+  +#+            */
/*   Created: 2025/03/15 11:20:21 by perferre          #+#   #+#              */
/*   Updated: 2025/03/15 11:29:11 by perferre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_putchar(char c);

void	rush(int x, int y)
{
	int	col;
	int	row;	

	row = 1;
	while (row <= y && x > 0 && y > 0)
	{
		col = 1;
		while (col <= x)
		{
			if ((row == 1 || row == y) && (col == 1 || col == x))
				ft_putchar('o');
			else if ((col == 1) || (col == x))
				ft_putchar('|');
			else if ((row == 1) || (row == y))
				ft_putchar('-');
			else
				ft_putchar(' ');
			col ++;
		}
		row++;
		ft_putchar('\n');
	}
	if ((x <= 0) || (y <= 0))
		write(1, "Array error", 11);
}
