/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_init_fractol.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: liferrei <liferrei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/05 11:51:40 by liferrei          #+#    #+#             */
/*   Updated: 2025/09/13 09:21:30 by liferrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fractol.h"

void	ft_init_fractol(t_fractol *f)
{
	f->mlx_ptr = mlx_init();
	if (!f->mlx_ptr)
		exit(1);
	f->win_ptr = mlx_new_window(f->mlx_ptr, WIDTH, HEIGHT, "fractol");
	if (!f->win_ptr)
		exit(1);
	f->img_ptr = mlx_new_image(f->mlx_ptr, WIDTH, HEIGHT);
	if (!f->img_ptr)
	{
		mlx_destroy_window(f->mlx_ptr, f->win_ptr);
		exit(1);
	}
	f->img_data = mlx_get_data_addr(f->win_ptr, &f->bpp, &f->l_size, &f->end);
	if (!f->img_data)
	{
		mlx_destroy_image(f->mlx_ptr, f->img_ptr);
		mlx_destroy_window(f->mlx_ptr, f->win_ptr);
		exit(1);
	}
	f->max_iter = MAX_ITER;
	f->zoom = 1.0;
	f->offset_x = 0.0;
	f->offset_y = 0.0;
	f->z.real = 0.0;
	f->z.imag = 0.0;
}
