/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_valited.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: liferrei <liferrei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/06 17:35:45 by liferrei          #+#    #+#             */
/*   Updated: 2025/09/06 18:42:04 by liferrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fractol.h"

void	ft_is_valid(int argc, char *argv[])
{
	char type_fractol;

	type_fractol = ft_str_tolower(argv[1]);

	if (type_fractol != "julia" || type_fractol != "mandelbrolt")
		return (0);
	free(type_fractol);
	if (!ft_isdigit(argv[2]) || !ft_isdigit(argv[3]))
		return (0);
}