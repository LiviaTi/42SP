/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: liferrei <liferrei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/07 12:08:44 by liferrei          #+#    #+#             */
/*   Updated: 2025/08/07 13:13:31 by liferrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

static char *read_and_fill(int fd, char *stash)
{
	char	buffer[BUFFER_SIZE + 1];
	size_t	bytes;
	
}
char	*get_next_line(int fd)
{
	static char *stash;
	char		*line;
	
	stash = NULL;
	if(fd < 0 || BUFFER_SIZE <= 0)
		return (NULL);
	stash = read_and_fill(fd, stash);
	if (!stash)
		return (NULL);
		line = extract_line(stash);
		stash = update_stash(stash);
	return (line);
}