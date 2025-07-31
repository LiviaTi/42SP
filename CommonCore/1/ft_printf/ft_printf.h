/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: liferrei <liferrei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/29 20:28:01 by liferrei          #+#    #+#             */
/*   Updated: 2025/07/30 17:29:09 by liferrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdlib.h>
# include <stdarg.h>

int ft_printf(const char *format, ...);

int	print_char(char c);
int	print_str(char *s);
int	print_int(int n);
int	print_uint(unsigned int n);
int	print_hex(unsigned int n, int uppercase);
int	print_ptr(unsigned long ptr);
int	print_percent(void);

size_t	ft_strlen(const char *s);
char	*ft_itoa_base(unsigned long n, int base, int upper);
void	ft_putstr(const char *s);
void	ft_putnbr(int n);
void	ft_putnbr_unsigned(unsigned int n);

#endif