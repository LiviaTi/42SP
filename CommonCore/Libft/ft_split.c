/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: liferrei <liferrei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/22 14:48:42 by liferrei          #+#    #+#             */
/*   Updated: 2025/07/25 14:40:59 by liferrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_count_words(const char *s, char c)
{
	size_t	count;
	size_t	in_word;

	count = 0;
	in_word = 0;
	while (*s)
	{
		if (*s != c && in_word == 0)
		{
			in_word = 1;
			count++;
		}
		else if (*s == c)
			in_word = 0;
		s++;
	}
	return (count);
}

static void	ft_free_words(char **words, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		free (words[i]);
		i++;
	}
	free (words);
}

static char	**ft_array_words(char const *s, int words, char c, char **array)
{
	int	i;
	int	j;
	int	start;

	i = 0;
	j = 0;
	start = 0;
	while (s[i] && j < words)
	{
		while (s[i] == c)
			i++;
		start = i;
		while (s[i] && s[i] != c)
			i++;
		array[j] = ft_substr (s, start, i - start);
		if (!array[j])
		{
			ft_free_words (array, j);
			return (NULL);
		}
		j++;
	}
	array[j] = NULL;
	return (array);
}

char	**ft_split(char const *s, char c)
{
	char	**array_result;
	size_t	i;
	size_t	j;
	size_t	words;

	i = 0;
	j = 0;
	words = ft_count_words (s, c);
	array_result = (char **)ft_calloc (words + 1, sizeof(char *));
	if (!array_result)
		return (NULL);
	array_result = ft_array_words(s, words, c, array_result);
	return (array_result);
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
        printf("Word %d: \"%s\"\n", i, result_split[i]);
        i++;
    }
	ft_free_words(result_split, i);
	return 0;
}
*/
