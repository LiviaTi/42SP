/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fractol.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: liferrei <liferrei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/05 12:02:57 by liferrei          #+#    #+#             */
/*   Updated: 2025/09/09 19:15:32 by liferrei         ###   ########.fr       */
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
	int			l_size;
	int			end;

	t_complex	c;
	t_complex	z;
	int			max_iter;
	int			fractal_type;
	double		zoom;
	double		offset_x;
	double		offset_y;
}				t_fractol;

int		main(int argc, char *argv[]);
void	ft_is_valid(int argc, char *argv[], t_fractol *fractol);
void	ft_init_fractol(t_fractol *f);
int		ft_handle_keypress(int keycode, t_fractol *fractol);
int		ft_handle_destroy(t_fractol *fractol);
int		ft_handle_mouse(int button, int x, int y, t_fractol *frac);
int		ft_render_frame(t_fractol *frac);
void	ft_draw_mandelbrot(t_fractol *fractol);
void	ft_draw_julia(t_fractol *fractol);

#endif
