/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   board.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: liferrei <liferrei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/23 19:59:23 by liferrei          #+#    #+#             */
/*   Updated: 2025/03/23 19:59:25 by liferrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	init_board(int board[4][4]);
void	print_board(int board[4][4]);

void	init_board(int board[4][4])
{
	int	row;
	int	col;

	row = 0;
	while (row < 4)
	{
		col = 0;
		while (col < 4)
		{
			board[row][col] = 0;
			col++;
		}
		row++;
	}
}

void	print_board(int board[4][4])
{
	int		row;
	int		col;
	char	value_char;

	row = 0;
	while (row < 4)
	{
		col = 0;
		while (col < 4)
		{
			value_char = board[row][col] + '0';
			write(1, &value_char, 1);
			if (col < 3)
				write(1, " ", 1);
			col++;
		}
		write(1, "\n", 1);
		row++;
	}
}
