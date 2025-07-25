/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: liferrei <liferrei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/22 14:48:42 by liferrei          #+#    #+#             */
/*   Updated: 2025/07/25 13:44:37 by liferrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_count_words(const char *s, char c)
{
	int count;
	int in_word;

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

static void	ft_free_words(char **words, int n)
{
	int i;

	i = 0;
	while (i < n)
	{
		free (words[i]);
		i++;
	}
	free (words);
}

char	**ft_split(char const *s, char c)
{
	char	**result;
	int		i;
	int		j;
	int		words;
	int		start;

	i = 0;
	j = 0;
    words = ft_count_words (s, c);
    result = (char **)ft_calloc (words + 1, sizeof(char *));
    if (!result)
        return (NULL);
    while (s[i] && j < words)
    {
        while (s[i] == c)
            i++;
        start = i;
        while (s[i] && s[i] != c)
            i++;
        result[j] = ft_substr(s, start, i - start);
        if (!result[j])
        {
            ft_free_words(result, j);
            return (NULL);
        }
        j++;
    }
    result[j] = NULL;
    return (result);
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