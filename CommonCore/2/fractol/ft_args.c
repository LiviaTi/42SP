/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_args.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: liferrei <liferrei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/06 17:35:45 by liferrei          #+#    #+#             */
/*   Updated: 2025/09/09 14:17:22 by liferrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fractol.h"

static	void ft_printf_usage(void)
{
	ft_printf("Usage: ./fractol [mandelbrot | julia c_real c_imag]");
	ft_printf("  mandelbrot: Displays the Mandelbrot set.\n");
	ft_printf("  julia: Displays the Julia set with custom parameters.\n");
	ft_printf("    c_real: Real part of the complex constant 'c' for Julia (e.g., -0.7).\n");
	ft_printf("    c_imag: Imaginary part of the complex constant 'c' for Julia (e.g., 0.27015).\n");
	exit(1);
}

void	ft_is_valid(int argc, char *argv[], t_fractol *fractol)
{
	char	*fractal_name;
	if (argc < 2)
	{
		ft_print_usage();
	}
	fractal_name = ft_str_tolower(argv);
	if (ft_strcmp(fractal_name, "mandelbrot")==0)
	{
		if (argc != 2)
		{
			ft_print_usage();
		}
		fractol->fractal_type =  MANDELBROT_TYPE;
	}
	else if (ft_strcmp(fractal_name, "julia") == 0)
	{
		if (argc != 4)
		{
			ft_print_usage();
		}
		fractol->c.real = ft_atof(argv[2]);
		fractol->c.imag = ft_atof(argv[3]);
		fractol-> fractal_type = JULIA_TYPE;
	}
	else
	{
		ft_print_usage();	
	}
}