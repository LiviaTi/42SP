/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fractol.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: liferrei <liferrei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/05 12:02:57 by liferrei          #+#    #+#             */
/*   Updated: 2025/09/09 14:19:33 by liferrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRACTOL_H
# define FRACTOL_H

# include <stdlib.h>
# include <math.h>

# include "mlx/mlx.h"
# include "ft_printf/ft_printf.h"

# define WIDTH 800
# define HEIGHT 600
# define MAX_ITER 300
# define MANDELBROT_TYPE 0
# define JULIA_TYPE      1

typedef struct s_complex
{
	double	real;
	double	imag;
}			t_complex;

typedef struct s_fractol
{
	void		*mlx_ptr;
	void		*win_ptr;
	void		*img_ptr;
	char		*img_data;
	int			bpp;
	int			size_line;
	int			endian;

	t_complex	c;
	t_complex	z;
	int			max_iter;
	int			fractal_type;
}				t_fractol;

int		main(void);
void	ft_draw_julia(t_fractol *f);
void	ft_draw_mandelbrot(t_fractol *f);
void	ft_put_pixel(t_fractol *f, int x, int y, int color);
int		ft_get_color(int iter, int max_iter);
void	ft_init_fractol(t_fractol *f, int fractal_type);
void	ft_is_valid(int argc, char *argv[]);
char	*ft_str_tolower(char *str);
int		ft_isdigit(int c);

#endif
