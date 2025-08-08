/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: liferrei <liferrei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/07 12:08:44 by liferrei          #+#    #+#             */
/*   Updated: 2025/08/08 19:46:52 by liferrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

static char	*ft_read_and_fill(int fd, char *stash)
{
	char	buffer[BUFFER_SIZE + 1];
	size_t	bytes;

	bytes = 1;
	while (!ft_strchr_gnl(stash, '\n') && bytes > 0)
	{
		if (bytes == 0)
			return (free(stash), NULL);
		buffer[bytes] = '\0';
		stash = ft_strjoin_gnl(stash, buffer);
	}
	return (stash);
}

static char	ft_extract_line(char *stash)
{
	size_t	len;
	char	*line;

	len = 0;
	if (!stash || !stash[0])
		return (NULL);
	while (stash[len] && stash[len] != '\n')
		len++;
	if (stash[len] == '\n')
		len++;
	line = ft_substr_gnl(stash, 0, len);
	return (line);
}

static char	ft_update_stash(char *stash)
{
	size_t	len;
	char	*update_stash;

	len = 0;
	while (stash[len] && stash[len] != '\n')
		len++;
	update_stash = ft_substr_gnl(stash[len], 0, len);
	return (update_stash);
}

char	*get_next_line(int fd)
{
	static char	*stash;
	char		*line;

	stash = NULL;
	if (fd < 0 || BUFFER_SIZE <= 0)
		return (NULL);
	stash = ft_read_and_fill(fd, stash);
	if (!stash)
		return (NULL);
		line = ft_extract_line(stash);
		stash = ft_update_stash(stash);
	return (line);
}
/*
#include <fcntl.h>   
#include <stdio.h>
#include "get_next_line.h"
int main (void)
{
	int fd = open("teste.txt", O_RDONLY);
	char *line;
	
	while((line = get_next_line(fd)))
	{
		printf("%s",line);
		free(line);
	}
	clode(fd);
	return (0);
}
*/