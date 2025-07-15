/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: liferrei <liferrei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/15 16:12:54 by liferrei          #+#    #+#             */
/*   Updated: 2025/07/15 17:00:35 by liferrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	const char	*last;
	int			i;

	last = NULL;
	i = 0;
	while(s[i] != '\0')
	{
		if (s[i] == (char)c)
		{
			last = &s[i];
		}
		i++;
	}
	if ((char)c == '\0')
		return ((char *)&s[i]);
	return ((char *)last);
}

/*
#include <stdio.h>
int main(void)
{
	const char *s = "livia";

	char *p = ft_strrchr(s, 'i');

	printf("%p\n", (void *)p);
    return 0;
}
*/
