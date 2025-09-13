/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: liferrei <liferrei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/05 12:08:47 by liferrei          #+#    #+#             */
/*   Updated: 2025/09/13 14:49:03 by liferrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fractol.h"

void	ft_terminal_print(void)
{
	ft_printf("Usage: ./fractol [mandelbrot | julia c_real c_imag]");
	ft_printf("mandelbrot: Displays the Mandelbrot set.\n");
	ft_printf("julia: Displays the Julia set with custom parameters.\n");
	ft_printf("	c_real: Complex constant 'c' for Julia (e.g., -0.7).\n");
	ft_printf(" c_imag: Complex constant 'c' for Julia (e.g., 0.27015).\n");
	exit(1);
}

static void	ft_setup_hooks(t_fractol *fractol)
{
	mlx_hook(fractol->win_ptr, 2, (1L << 0), ft_handle_keypress, fractol);
	mlx_hook(fractol->win_ptr, 17, 0, ft_handle_destroy, fractol);
	mlx_hook(fractol->win_ptr, 4, (1L << 2), ft_handle_mouse, fractol);
}

int	main(int argc, char *argv[])
{
	t_fractol	fractol;

	ft_is_valid(argc, argv, &fractol);
	ft_init_fractol(&fractol);
	ft_events(&fractol);
	ft_setup_hooks(&fractol);
	mlx_loop(fractol.mlx_ptr);
	return (0);
}
