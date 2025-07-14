/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putbuf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: liferrei <liferrei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/11 16:10:56 by liferrei          #+#    #+#             */
/*   Updated: 2025/07/11 16:12:55 by liferrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_putbuf(char *buffer, int size)
{
	int	i;

	i = 0;
	while (i < size)
	{
		ft_putchar(buffer[i]);
		i++;
	}
}
