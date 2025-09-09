/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_init_fractol.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: liferrei <liferrei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/05 11:51:40 by liferrei          #+#    #+#             */
/*   Updated: 2025/09/09 15:26:34 by liferrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fractol.h"

void ft_init_fractol(t_fractol *fractol)
{
	fractol->mlx_ptr = mlx_init();
	if (!fractol->mlx_ptr)
		exit(1);

	fractol->win_ptr = mlx_new_window(fractol->mlx_ptr, WIDTH, HEIGHT, "fractol");
	if (!fractol->win_ptr)
		exit(1);
	fractol->img_ptr = mlx_new_image(fractol->mlx_ptr, WIDTH, HEIGHT);
	if (!fractol->img_ptr)
	{
		mlx_destroy_window(fractol->mlx_ptr, fractol->win_ptr);
		exit(1);
	}
	fractol->img_data = mlx_get_data_addr(fractol->win_ptr, 
											&fractol->bpp, 
											&fractol->size_line,
											&fractol->endian);
	fractol->max_iter = MAX_ITER;
	fractol->zoom = 1.0;
	fractol->offset_x = 0.0;
	fractol->offset_y = 0.0;
	
	fractol->z.real = 0.0;
	fractol->z.imag = 0.0;
}