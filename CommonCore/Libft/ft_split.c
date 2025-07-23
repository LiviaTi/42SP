/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: liferrei <liferrei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/22 14:48:42 by liferrei          #+#    #+#             */
/*   Updated: 2025/07/23 14:45:43 by liferrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_count_word(char const *s, char c)
{
	size_t	in_word;
	size_t	count_word;

	in_word = 0;
	count_word = 0;
	while (*s != '\0')
	{
		if (*s != c && in_word == 0)
		{
			in_word = 1;
			count_word++;
		}
		else if (*s == c)
		{
			in_word = 0;
		}	
		s++;
	}
	return( count_word);			
}
size_t	ft_word_len(const char *s, char c)
{
	size_t	word_len;

	word_len = 0;
	while (s[word_len] && s[word_len] != c)
		word_len++;
	return	(word_len);
}

char **ft_split(char const *s, char c)
{
	char **array_slip;
	size_t	count_word;
	size_t	i;
	size_t	j;
	size_t	word_len;

	i = 0;
	j = 0;
	word_len = 0;
	count_word = ft_count_word(s, c);
	**array_slip = malloc(count_word + 1) * sizeof(char *);
	if (!array)
		return(NULL);
	while (i < count_word)
	{
		while(*s == c)
			s++
		word_len = ft_word_len(*s, c);
		array_slip[i] = malloc(word_len + 1);
		if(!array_slip)
		{
			while (j < i)
				free(array_slip[j]);
				j++
			free(array_slip);
			return (NULL);
		}
		strncpy(array[i], s, len);
        array[i][word_len] = '\0';
        s += word_len;
        i++;
		}
		array[word_len] = NULL;
		return (array_slip);
		i++;
	}
/*
#include <stdio.h>
int main(void)
{
	char str[] = "Ola, mundo, livia";
	char separator = ',';
	char **result_split;
	int i = 0;
	int j = 0;
	
	result_split = ft_split(str,separator);


	while (result_split[i] != NULL)
    {
        printf("Palavra %d: \"%s\"\n", i, result_split[i]);
        i++;
    }

	
	return 0;
}
	*/