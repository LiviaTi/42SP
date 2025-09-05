/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_put_pixel.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: liferrei <liferrei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/05 12:14:29 by liferrei          #+#    #+#             */
/*   Updated: 2025/09/05 19:34:12 by liferrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fractol.h"

void	ft_put_pixel(t_fractol *fractol, int x, int y, int color)
{
    char *pixel;

    if (x < 0 || x >= WIDTH || y < 0 || y >= HEIGHT)
        return;
    pixel = fractol->img_data + (y * fractol->size_line + x * (fractol->bpp / 8));
    *(unsigned int *)pixel = color;
}
