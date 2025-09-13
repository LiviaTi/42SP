/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_events.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: liferrei <liferrei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/05 12:14:29 by liferrei          #+#    #+#             */
/*   Updated: 2025/09/13 13:55:47 by liferrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fractol.h"

static void	ft_exit_clean(t_fractol *fractol)
{
	if (fractol->img_ptr)
		mlx_destroy_image(fractol->mlx_ptr, fractol->img_ptr);
	if (fractol->win_ptr)
		mlx_destroy_window(fractol->mlx_ptr, fractol->win_ptr);
	exit(0);
}


int	ft_handle_destroy(t_fractol *fractol)
{
	ft_exit_clean(fractol);
	return (0);
}


int	ft_events(t_fractol *frac)
{
	if (frac ->fractal_type == MANDELBROT_TYPE)
		ft_draw_mandelbrot(frac);
	else if (frac->fractal_type == JULIA_TYPE)
		ft_draw_julia(frac);
	mlx_put_image_to_window(frac->mlx_ptr, frac->win_ptr, frac->img_ptr, 0, 0);
	return (0);
}
