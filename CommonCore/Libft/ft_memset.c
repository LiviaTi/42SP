/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: liferrei <liferrei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/14 17:14:00 by liferrei          #+#    #+#             */
/*   Updated: 2025/07/14 18:39:02 by liferrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	*ft_memset(void *s, int c,unsigned int buf)
{
	unsigned char	*p = (unsigned char *)s;
	unsigned char	value = (unsigned char)c;
	unsigned int	i;

	i = 0;
    while (i < buf) 
	{
        p[i] = value;
        i++;
    }
    return (s);
}


#include <stdio.h>
int main() {
    char buffer[5];

    ft_memset(buffer, 'A', 5);

    for (int i = 0; i < 5; i++) {
        printf("buffer[%d] = %c (ASCII %d)\n", i, buffer[i], buffer[i]);
    }

    return 0;
}
