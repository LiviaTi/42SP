/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   views.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: liferrei <liferrei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/23 21:57:15 by liferrei          #+#    #+#             */
/*   Updated: 2025/03/23 21:57:17 by liferrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	count_visible_row(int *row, int direction)
{
	int	max;
	int	visible;
	int	col;

	max = 0;
	visible = 0;
	if (direction == 0)
		col = 0;
	else
		col = 3;
	while (col >= 0 && col < 4)
	{
		if (row[col] > max)
		{
			max = row[col];
			visible++;
		}
		if (direction == 0)
			col++;
		else
			col--;
	}
	return (visible);
}

int	count_visible_col(int board[4][4], int col_index, int direction)
{
	int	max;
	int	visible;
	int	row;

	max = 0;
	visible = 0;
	if (direction == 0)
		row = 0;
	else
		row = 3;
	while (row >= 0 && row < 4)
	{
		if (board[row][col_index] > max)
		{
			max = board[row][col_index];
			visible++;
		}
		if (direction == 0)
			row++;
		else
			row--;
	}
	return (visible);
}

int	check_col_views(int board[4][4], int *input, int *index)
{
	int	col;

	col = 0;
	while (col < 4)
	{
		if (count_visible_col(board, col, 0) != input[*index])
			return (0);
		col++;
		(*index)++;
	}
	col = 0;
	while (col < 4)
	{
		if (count_visible_col(board, col, 1) != input[*index])
			return (0);
		col++;
		(*index)++;
	}
	return (1);
}

int	check_row_views(int board[4][4], int *input, int *index)
{
	int	row;

	row = 0;
	while (row < 4)
	{
		if (count_visible_row(board[row], 0) != input[*index])
			return (0);
		row++;
		(*index)++;
	}
	row = 0;
	while (row < 4)
	{
		if (count_visible_row(board[row], 1) != input[*index])
			return (0);
		row++;
		(*index)++;
	}
	return (1);
}

int	check_views(int board[4][4], int *input)
{
	int	index;

	index = 0;
	if (!check_col_views(board, input, &index))
		return (0);
	if (!check_row_views(board, input, &index))
		return (0);
	return (1);
}
