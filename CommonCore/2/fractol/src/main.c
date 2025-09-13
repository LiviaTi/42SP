/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: liferrei <liferrei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/05 12:08:47 by liferrei          #+#    #+#             */
/*   Updated: 2025/09/13 13:56:44 by liferrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fractol.h"

int	main(int argc, char *argv[])
{  
    t_fractol fractol;
    
    ft_is_valid(argc, argv, &fractol);
	ft_printf("Teste\n");
	ft_init_fractol(&fractol);
	ft_events(&fractol);
	ft_printf("Fractal events.\n");
	ft_setup_hooks(&fractol);
	ft_printf("Fractal hooks.\n");
	mlx_loop(fractol.mlx_ptr);
	ft_printf("Fractal loop.\n");
	return (0);
}
