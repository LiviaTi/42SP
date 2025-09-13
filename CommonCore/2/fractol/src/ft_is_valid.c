/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_valid.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: liferrei <liferrei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/06 17:35:45 by liferrei          #+#    #+#             */
/*   Updated: 2025/09/13 15:00:44 by liferrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fractol.h"

static char	*ft_str_tolower(const char *str)
{
	int		i;
	char	*lower;

	if (!str)
		return (NULL);
	i = 0;
	while (str[i])
		i++;
	lower = (char *)malloc(sizeof(char) * (i + 1));
	if (!lower)
		return (NULL);
	i = 0;
	while (str[i])
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
			lower[i] = str[i] + 32;
		else
			lower[i] = str[i];
		i++;
	}
	lower[i] = '\0';
	return (lower);
}

static int	ft_strcmp(const char *s1, const char *s2)
{
	while (*s1 && *s2 && *s1 == *s2)
	{
		s1++;
		s2++;
	}
	return ((unsigned char)*s1 - (unsigned char)*s2);
}

static double	ft_parse_frac(const char *str)
{
	double	frac;
	int		div;

	frac = 0.0;
	div = 1;
	while (*str >= '0' && *str <= '9')
	{
		frac = frac * 10 + (*str++ - '0');
		div *= 10;
	}
	return (frac / div);
}

double	ft_atof(const char *str)
{
	double	result;
	double	frac;
	int		sign;

	result = 0.0;
	sign = 1;
	while (*str == ' ' || (*str >= 9 && *str <= 13))
		str++;
	if (*str == '-' || *str == '+')
	{
		if (*str == '-')
			sign = -1;
		str++;
	}
	while (*str >= '0' && *str <= '9')
		result = result * 10 + (*str++ - '0');
	frac = 0.0;
	if (*str == '.')
		frac = ft_parse_frac(++str);
	return ((result + frac) * sign);
}

void	ft_is_valid(int argc, char *argv[], t_fractol *fractol)
{
	char	*fractal_name;

	if (argc < 2)
		ft_terminal_print();
	fractal_name = ft_str_tolower(argv[1]);
	if (!fractal_name)
		ft_terminal_print();
	if (ft_strcmp(fractal_name, "mandelbrot") == 0)
	{
		if (argc != 2)
			ft_terminal_print();
		fractol->fractal_type = MANDELBROT_TYPE;
	}
	else if (ft_strcmp(fractal_name, "julia") == 0)
	{
		if (argc != 4)
			ft_terminal_print();
		fractol->c.real = ft_atof(argv[2]);
		fractol->c.imag = ft_atof(argv[3]);
		fractol->fractal_type = JULIA_TYPE;
	}
	else
		ft_terminal_print();
	free(fractal_name);
}
