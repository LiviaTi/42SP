/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display_file.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: liferrei <liferrei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/11 16:11:30 by liferrei          #+#    #+#             */
/*   Updated: 2025/07/11 16:37:01 by liferrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fcntl.h>
#include <unistd.h>

void	ft_putbuf(char *buffer, int size);

void	ft_display_file(char *filename)
{
	int		fd;
	char	buffer[1024];
	int		bytes_read;

	fd = open(filename, O_RDONLY);
	if (fd < 0)
		return ;
	bytes_read = read(fd, buffer, 1024);
	while (bytes_read > 0)
	{
		ft_putbuf(buffer, bytes_read);
		bytes_read = read(fd, buffer, 1024);
	}
	close(fd);
}
