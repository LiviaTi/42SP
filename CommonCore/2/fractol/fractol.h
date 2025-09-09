/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fractol.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: liferrei <liferrei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/05 12:02:57 by liferrei          #+#    #+#             */
/*   Updated: 2025/09/09 17:19:30 by liferrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRACTOL_H
# define FRACTOL_H

# include <stdlib.h>
# include <math.h>

# include "mlx/mlx.h"
# include "libft/ft_printf/ft_printf.h"
# include "libft/libft.h"

// Window and image dimensions
# define WIDTH 800
# define HEIGHT 800

// Max iterations for fractal calculation [1,2]
# define MAX_ITER 40

// Fractal type
# define MANDELBROT_TYPE	0
# define JULIA_TYPE			1

// Keycodes for Linux
# define KEY_ESC			65307
# define KEY_LEFT			65361
# define KEY_RIGHT			65363
# define KEY_UP				65362
# define KEY_DOWN			65364

// Mouse button codes for scroll
# define MOUSE_SCROLL_UP	4
# define MOUSE_SCROLL_DOWN	5

typedef struct s_complex
{
	double	real;
	double	imag;
}			t_complex;

// Main structure for MiniLibX and fractal parameters 
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
	
	double		zoom;
	double		offset_x;
	double		offset_y;
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
