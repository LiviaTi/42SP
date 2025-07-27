/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: liferrei <liferrei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/22 14:53:50 by liferrei          #+#    #+#             */
/*   Updated: 2025/07/25 17:46:28 by liferrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	unsigned int	i;

	i = 0;
	while (s[i] != '\0')
	{
		f(i, &s[i]);
		i++;
	}
}

/*
#include <stdio.h>

void	my_toupper(unsigned int i, char *c)
{
	(void)i;
	*c = (char)ft_toupper((unsigned char)*c);
}

int	main(void)
{
	char	str[] = "hello world";

	ft_striteri(str, my_toupper);

	printf("%s\n", str);
	return (0);
}
*/