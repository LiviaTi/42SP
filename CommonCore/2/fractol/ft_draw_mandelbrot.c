/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_draw_mandelbrot.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: liferrei <liferrei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/05 12:08:35 by liferrei          #+#    #+#             */
/*   Updated: 2025/09/09 18:10:17 by liferrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fractol.h"

void	ft_ft_draw_mandelbrot(t_fractol *fractol)
{
	int			x_pixel;
	int			y_pixel;
	t_complex	num_complex;
	int			iter;

	y_pixel = 0;
	while (y_pixel < HEIGHT)
	{
		x_pixel = 0;
		while (x_pixel < WIDTH)
		{
			num_complex.real = map_x_to_real(x_pixel, fractol);
			num_complex.imag = map_y_to_imag(y_pixel, fractol);
			iter = ft_draw_mandelbrot_calulate_iterations(c, fractol->max_iter);
			my_mlx_pixel_put(fractol, x_pixel, y_pixel, ft_color(iter, fractol->max_iter));
			
		}
	}
	
}