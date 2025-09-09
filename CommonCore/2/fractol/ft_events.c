/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_events.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: liferrei <liferrei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/05 12:14:29 by liferrei          #+#    #+#             */
/*   Updated: 2025/09/09 16:21:58 by liferrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fractol.h"

static void ft_exit_clean(t_fractol *fractol)
{
	if (fractol->img_ptr)
		mlx_destroy_image(fractol->mlx_ptr, fractol->img_ptr);
	if (fractol->win_ptr)
		mlx_destroy_window(fractol->mlx_ptr, fractol->win_ptr);
	exit(0);
}

int ft_handle_keypress(int keycode, t_fractol *fractol)
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
