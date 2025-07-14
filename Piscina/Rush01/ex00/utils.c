/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: liferrei <liferrei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/23 19:58:59 by liferrei          #+#    #+#             */
/*   Updated: 2025/03/23 20:01:32 by liferrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	is_valid(int board[4][4], int row, int col, int value);

int	is_valid(int board[4][4], int row, int col, int value)
{
	int	i;

	i = 0;
	while (i < 4)
	{
		if (board[row][i] == value)
			return (0);
		i++;
	}
	i = 0;
	while (i < 4)
	{
		if (board[i][col] == value)
			return (0);
		i++;
	}
	return (1);
}
