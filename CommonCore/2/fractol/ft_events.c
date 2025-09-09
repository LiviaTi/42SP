/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_events.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: liferrei <liferrei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/05 12:14:29 by liferrei          #+#    #+#             */
/*   Updated: 2025/09/09 18:37:32 by liferrei         ###   ########.fr       */
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

int	ft_handle_keypress(int keycode, t_fractol *fractol)
{
	if (keycode == KEY_ESC)
		ft_exit_clean(fractol);
	else if (keycode == KEY_LEFT)
		fractol->offset_x -= 0.1 * fractol->zoom;
	else if (keycode == KEY_RIGHT)
		fractol->offset_x += 0.1 * fractol->zoom;
	else if (keycode == KEY_UP)
		fractol->offset_y -= 0.1 * fractol->zoom;
	else if (keycode == KEY_DOWN)
		fractol->offset_y += 0.1 * fractol->zoom;
	else
		return (0);
}

int	ft_handle_destroy(t_fractol *fractol)
{
	exit_clean(fractol);
	return (0);
}

int	ft_handle_mouse(int button, int x, int y, t_fractol *frac)
{
	double	mouse_real;
	double	mouse_imag;

	mouse_real = frac->offset_x + ((double)x / WIDTH - 0.5) * 4.0 * frac->zoom;
	mouse_imag = frac->offset_x + ((double)y / HEIGHT - 0.5) * 4.0 * frac->zoom;
	if (button == MOUSE_SCROLL_UP)
	{
		frac->zoom *= 0.8;
		frac->offset_x = mouse_real + (frac->offset_x - mouse_real) * 0.8;
		frac->offset_y = mouse_imag + (frac->offset_y - mouse_imag) * 0.8;
	}
	else if (button == MOUSE_SCROLL_DOWN)
	{
		frac->zoom *= 1.2;
		frac->offset_x = mouse_real + (frac->offset_x - mouse_real) * 1.2;
		frac->offset_x = mouse_imag + (frac->offset_y - mouse_imag) * 1.2;
	}
	else
		return (0);
	ft_render_frame(frac);
	return (0);
}

int	ft_render_frame(t_fractol *frac)
{
	if (frac ->fractal_type == MANDELBROT_TYPE)
		ft_draw_mandelbrot(frac);
	else if (frac->fractal_type == JULIA_TYPE)
		ft_draw_julia(frac);
	mlx_put_image_to_window(frac->mlx_ptr, frac->win_ptr, frac->img_ptr, 0, 0);
	return (0);
}
