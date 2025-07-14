/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   solver.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: liferrei <liferrei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/23 19:59:03 by liferrei          #+#    #+#             */
/*   Updated: 2025/03/23 19:59:34 by liferrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	solve_board(int board[4][4], int *input, int row, int col);
int	is_valid(int board[4][4], int row, int col, int value);
int	check_views(int board[4][4], int *input);

int	solve_board(int board[4][4], int *input, int row, int col)
{
	int	value;

	if (row == 4)
		return (check_views(board, input));
	if (col == 4)
		return (solve_board(board, input, row + 1, 0));
	value = 1;
	while (value <= 4)
	{
		if (is_valid(board, row, col, value))
		{
			board[row][col] = value;
			if (solve_board(board, input, row, col + 1))
				return (1);
			board[row][col] = 0;
		}
		value++;
	}
	return (0);
}
