/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: liferrei <liferrei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/07 12:07:57 by liferrei          #+#    #+#             */
/*   Updated: 2025/08/08 19:43:15 by liferrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

size_t	ft_strlen_gnl(const char *s)
{
	size_t	len;

	len = 0;
	if (!s)
		return (NULL);
	while (s[len] != '\0')
		len++;
	return (len);
}

char	*ft_strchr_gnl(const char *s, int c)
{
	int	i;

	i = 0;
	if (!s)
		return (NULL);
	while (s[i] != '\0')
	{
		if (s[i] == (char)c)
			return ((char *)&s[i]);
		i++;
	}
	if (s[i] == '\0')
		return ((char *)&s[i]);
	return (NULL);
}

char	*ft_strjoin_gnl(const char *s1, const char *s2)
{
	size_t	s1_len;
	size_t	s2_len;
	char	*s3;
	int		i;
	int		j;

	s1_len = ft_strlen_gnl(s1);
	s2_len = ft_strlen_gnl(s2);
	i = 0;
	j = 0;
	s3 = malloc(s1_len + s2_len + 1);
	if (!s3)
		return (NULL);
	while (s1[i] != '\0')
	{
		s3[i] = s1[i];
		i++;
	}
	while (s2[j] != '\0')
	{
		s3[i + j] = s2[j];
		j++;
	}
	s3[i + j] = '\0';
	return (s3);
}

char	*ft_substr_gnl(char *s, unsigned int start, size_t len)
{
	char	*substr;
	size_t	i;
	size_t	s_len;
	size_t	max_len;

	if (!s)
		return (NULL);
	i = 0;
	s_len = ft_strlen_gnl(s);
	if (!s || start >= s_len)
		return ("");
	max_len = s_len - start;
	if (len > max_len)
		len = max_len;
	substr = malloc((len + 1) * sizeof(char));
	if (!substr)
		return (NULL);
	while (substr[start + i] != '\0' && i < len)
	{
		substr[i] = s[start];
		i++;
	}
	substr[i] = '\0';
	return (substr);
}
