/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_init_fractol.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: liferrei <liferrei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/05 11:51:40 by liferrei          #+#    #+#             */
/*   Updated: 2025/09/13 14:47:46 by liferrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fractol.h"

void	clean_init(t_fractol *f, t_complex *c)
{
	f->mlx_ptr = NULL;
	f->win_ptr = NULL;
	f->img_ptr = NULL;
	f->img_data = NULL;
	f->bpp = 0;
	f->l_size = 0;
	f->end = 0;
	f->max_iter = 0;
	f->fractal_type = 0;
	f->zoom = 0.0;
	f->offset_x = 0.0;
	f->offset_y = 0.0;
	c->real = 0.0;
	c->imag = 0.0;
}

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
	f->img_data = mlx_get_data_addr(f->img_ptr, &f->bpp, &f->l_size, &f->end);
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
