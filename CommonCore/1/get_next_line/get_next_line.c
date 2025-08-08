/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: liferrei <liferrei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/07 12:08:44 by liferrei          #+#    #+#             */
/*   Updated: 2025/08/08 14:00:25 by liferrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char *ft_read_and_fill(int fd, char *stash)
{
	char	buffer[BUFFER_SIZE + 1];
	size_t	bytes;
	
}

char	ft_extract_line(char *stash)
{
	size_t len;

	len = 0;
	if (!stash || !stash[0])
		return (NULL);
	while (stash[len] && stash[len] != '\n')
		len++;
	
	
}

char	ft_update_stash(char *stash)
{
	
}

char	*get_next_line(int fd)
{
	static char *stash;
	char		*line;
	
	stash = NULL;
	if(fd < 0 || BUFFER_SIZE <= 0)
		return (NULL);
	stash = ft_read_and_fill(fd, stash);
	if (!stash)
		return (NULL);
		line = ft_extract_line(stash);
		stash = ft_update_stash(stash);
	return (line);
}