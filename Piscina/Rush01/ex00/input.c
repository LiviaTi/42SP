/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   input.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: liferrei <liferrei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/23 19:59:11 by liferrei          #+#    #+#             */
/*   Updated: 2025/03/23 20:04:32 by liferrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	parse_input(char *str, int *output)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (str[i])
	{
		if (str[i] >= '1' && str[i] <= '4')
		{
			if (count >= 16)
				return (0);
			output[count] = str[i] - '0';
			count++;
		}
		else if (str[i] != ' ')
		{
			return (0);
		}
		i++;
	}
	if (count != 16)
		return (0);
	return (1);
}
