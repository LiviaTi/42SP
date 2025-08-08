/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: liferrei <liferrei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/07 12:09:06 by liferrei          #+#    #+#             */
/*   Updated: 2025/08/08 19:38:44 by liferrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H
# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 42
# endif
# include	<stdlib.h>

char		*get_next_line(int fd);
static char	ft_extract_line(char *stash);
static char	*ft_read_and_fill(int fd, char *stash);
static char	ft_update_stash(char *stash);
size_t		ft_strlen_gnl(const char *s);
char		*ft_strchr_gnl(const char *s, int c);
char		*ft_substr_gnl(const char *s, unsigned int start, int len);
char		*ft_strchr_gnl(const char *s, int c);
char		*ft_strjoin_gnl(const char *s1, const char *s2);
#endif