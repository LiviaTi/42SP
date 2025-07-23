/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: liferrei <liferrei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/22 14:56:19 by liferrei          #+#    #+#             */
/*   Updated: 2025/07/23 20:03:59 by liferrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putstr_fd(char *s, int fd)
{
	int	i;

	i = 0;
	while (s[i] != '\0')
	{
		ft_putchar_fd (s[i], fd);
		i++;
	}
	ft_putchar_fd ('\n',fd);
}

#include <stdio.h>
#include <fcntl.h>
int main(void)
{
	char str1[] = "Inteligent Livia";
	int fd = open("test.txt", O_WRONLY | O_CREAT | O_TRUNC, 0644);
	if (fd == -1)
	{
		printf("Error open the file");
		return 1;
	}
	ft_putstr_fd(str1, fd); 
	close(fd);
}
