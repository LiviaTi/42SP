/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: liferrei <liferrei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/05 12:08:47 by liferrei          #+#    #+#             */
/*   Updated: 2025/09/09 13:43:02 by liferrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


# include "fractol.h"

int main (int argc,char *argv[])
{
	t_fractol	fractol;
	
	ft_is_valid(argc, argv, &fractol);
	ft_init_fractol(&fractol);
	

	mlx_hook(fractol.win_ptr, ON_KEYDOWN, 1L << 0, handle_keypress, &fractol);
	mlx_hook(fractol.win_ptr, ON_DESTROY, 0, handle_destroy, &fractol);
	mlx_mouse_hook(fractol.win_ptr, handle_mouse, &fractol);

	mlx_loop_hook(fractol.mlx_ptr, render_frame, &fractol);
	mlx_loop(fractol.mlx_ptr);

    return (0);
}