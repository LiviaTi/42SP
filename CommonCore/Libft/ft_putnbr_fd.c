/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: liferrei <liferrei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/22 14:57:51 by liferrei          #+#    #+#             */
/*   Updated: 2025/07/24 12:20:11 by liferrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	char	*number_char;
	size_t	i;

	i = 0;
	number_char = ft_itoa(n);
	while (number_char[i] != '\0')
	{
		write(fd, &number_char[i], 1);
		i++;
	}
}

/*
#include <stdio.h>
#include <fcntl.h>
int main(void)
{
	int num= 45;
	int fd = open("test1.txt", O_WRONLY | O_CREAT | O_TRUNC, 0644);
	if (fd == -1)
	{
		printf("Error open the file");
		return 1;
	}
	ft_putnbr_fd(num, fd); 
	close(fd);
	return (0);
}
*/