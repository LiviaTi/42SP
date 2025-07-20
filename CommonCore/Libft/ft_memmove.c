/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: liferrei <liferrei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/15 13:04:55 by liferrei          #+#    #+#             */
/*   Updated: 2025/07/20 17:21:53 by liferrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char		*d;
	const unsigned char	*s;

	d = (unsigned char *)dest;
	s = (const unsigned char *)src;
	if (d == s || n == 0)
		return (dest);
	if (d < s)
	{
		while (n--)
		{
			*d = *s;
			d++;
			s++;
		}
	}
	else
	{
		while (n--)
			d[n] = s[n];
	}
	return (dest);
}

/*
#include <stdio.h>
int main(void)
{
    char src1[]  = "Thiago";
    char dest1[] = "Livia";


    ft_memmove(dest1, src1, 3);

    printf("Sem sobreposição:\n");
    printf("  src1  = \"%s\"\n", src1);
    printf("  dest1 = \"%s\"\n\n", dest1);

    return 0;
}
*/