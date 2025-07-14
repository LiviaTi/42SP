/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: liferrei <liferrei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/23 19:59:18 by liferrei          #+#    #+#             */
/*   Updated: 2025/03/23 19:59:28 by liferrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		parse_input(char *str, int *output);
void	init_board(int board[4][4]);
void	print_board(int board[4][4]);
int		solve_board(int board[4][4], int *input, int row, int col);

int	main(int argc, char **argv)
{
	int	input[16];
	int	board[4][4];

	if (argc != 2 || !parse_input(argv[1], input))
	{
		write(1, "Error\n", 6);
		return (1);
	}
	init_board(board);
	if (solve_board(board, input, 0, 0))
		print_board(board);
	else
		write(1, "Error\n", 6);
	return (0);
}
