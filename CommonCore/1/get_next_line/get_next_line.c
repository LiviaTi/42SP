/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: liferrei <liferrei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/07 12:08:44 by liferrei          #+#    #+#             */
/*   Updated: 2025/08/14 13:28:26 by liferrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*ft_read_and_fill(int fd, char *stash)
{
	char	*buffer;
	ssize_t	bytes;

	buffer = malloc(BUFFER_SIZE + 1);
	if (!buffer)
		return (NULL);
	bytes = 1;
	while (!ft_strchr_gnl(stash, '\n') && bytes > 0)
	{
		bytes = read(fd, buffer, BUFFER_SIZE);
		if (bytes < 0)
		{
			free(buffer);
			free(stash);
			return (NULL);
		}
		buffer[bytes] = '\0';
		stash = ft_strjoin_gnl(stash, buffer);
	}
	free(buffer);
	return (stash);
}

char	*ft_extract_line(char *stash)
{
	size_t	len;

	len = 0;
	if (!stash || !stash[0])
		return (NULL);
	while (stash[len] && stash[len] != '\n')
		len++;
	if (stash[len] == '\n')
		len++;
	return (ft_substr_gnl(stash, 0, len));
}

char	*ft_update_stash(char *stash)
{
	size_t	len;
	char	*update_stash;

	len = 0;
	while (stash[len] && stash[len] != '\n')
		len++;
	if (!stash[len])
	{
		free(stash);
		return (NULL);
	}
	update_stash = ft_substr_gnl(stash, len + 1, ft_strlen_gnl(stash) - (len + 1));
	free(stash);
	return (update_stash);
}

char	*get_next_line(int fd, char **stash)
{
	char	*line;

	if (fd < 0 || BUFFER_SIZE <= 0)
		return (NULL);
	*stash = ft_read_and_fill(fd, *stash);
	if (!*stash)
		return (NULL);
	line = ft_extract_line(*stash);
	*stash = ft_update_stash(*stash);
	return (line);
}

/*
#include <fcntl.h>   
#include <stdio.h>
#include "get_next_line.h"
int main(void)
{
	int		fd = open("teste.txt", O_RDONLY);
	char	*stash = NULL;
	char	*line;

	while ((line = get_next_line(fd, &stash)))
	{
		printf("%s", line);
		free(line);
	}
	free(stash);
	close(fd);
	return (0);
}
*/