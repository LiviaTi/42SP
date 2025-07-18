/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: liferrei <liferrei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/15 15:16:49 by liferrei          #+#    #+#             */
/*   Updated: 2025/07/18 14:44:19 by liferrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"


size_t ft_strlcpy(char *dst, const char *src, size_t size) {
	const char *s = src;
	size_t n = size;

	if (n != 0) {
		while (--n != 0) {
			if ((*dst++ = *s++) == '\0')
				break;
        }
    }

	if (n == 0) {
		if (size != 0)
			*dst = '\0';
		while (*s++);
	}
	return (size_t)(s - src - 1);
}
int main() {
	char buffer[10];
	const char *texto = "exemplo muito longo";

	size_t resultado = strlcpy(buffer, texto, sizeof(buffer));

	printf("Buffer: \"%s\"\n", buffer);
	printf("Tamanho total da string de origem: %zu\n", resultado);

	if (resultado >= sizeof(buffer)) {
		printf("Warning: String was truncated!\n");
	}
	else
	{
		printf("Copy successful\n");
	}
	return 0;
}