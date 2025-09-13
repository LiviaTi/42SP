/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: liferrei <liferrei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/05 12:08:47 by liferrei          #+#    #+#             */
/*   Updated: 2025/09/09 19:17:05 by liferrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fractol.h"

static void	ft_setup_hooks(t_fractol *fractol)
{
	mlx_hook(fractol->win_ptr, 2, (1L << 0), ft_handle_keypress, fractol);
	mlx_hook(fractol->win_ptr, 17, 0, ft_handle_destroy, fractol);
	mlx_hook(fractol->win_ptr, 4, (1L << 2), ft_handle_mouse, fractol);
	mlx_loop_hook(fractol->mlx_ptr, ft_render_frame, fractol);
}

int	main(int argc, char *argv[])
{
	t_fractol	fractol;

	ft_is_valid(argc, argv, &fractol);
	ft_init_fractol(&fractol);
	ft_render_frame(&fractol);
	ft_setup_hooks(&fractol);
	mlx_loop(fractol.mlx_ptr);
	return (0);
}
