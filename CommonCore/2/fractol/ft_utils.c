/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_utils.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: liferrei <liferrei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/06 17:44:01 by liferrei          #+#    #+#             */
/*   Updated: 2025/09/09 18:56:08 by liferrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fractol.h"

void	ft_pixel_put(t_fractol *fractol, int x, int y, int color)
{
	char	*dst;

	dst = fractol->img_data + (y * fractol->l_size + x * \
			(fractol->bpp / 8));
	*(unsigned int *)dst = color;
}

static int	ft_create_trgb(int t, int r, int g, int b)
{
	return (t << 24 | r << 16 | g << 8 | b);
}

int	ft_color(int iterations, int max_iter)
{
	int	r;
	int	g;
	int	b;

	if (iterations == max_iter)
		return (0x000000);
	r = (iterations * 9) % 256;
	g = (iterations * 15) % 256;
	b = (iterations * 20) % 256;
	return (create_trgb(0, r, g, b));
}

double	ft_map_x_to_real(int x, t_fractol *fractol)
{
	return (fractol->offset_x + ((double)x / WIDTH - 0.5) * 4.0 \
			* fractol->zoom);
}

double	ft_map_y_to_imag(int y, t_fractol *fractol)
{
	return (fractol->offset_y + (0.5 - (double)y / HEIGHT) * 4.0 \
			* fractol->zoom);
}
