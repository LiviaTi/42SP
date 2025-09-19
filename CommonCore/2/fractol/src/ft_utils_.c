/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_utils_.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: liferrei <liferrei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/13 17:39:40 by liferrei          #+#    #+#             */
/*   Updated: 2025/09/15 16:05:04 by liferrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fractol.h"

int	ft_strcmp(const char *s1, const char *s2)
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