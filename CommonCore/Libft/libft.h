/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: liferrei <liferrei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/14 12:27:59 by liferrei          #+#    #+#             */
/*   Updated: 2025/07/14 18:53:01 by liferrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

#include <unistd.h>
#include <stdlib.h>

int	ft_isalpha(int a);
int	ft_isdigit(int a);
int ft_isalnum(int a);
int	ft_isascii(int a);
int	ft_isprint(int a);
unsigned int ft_strlen(char *str);
void *ft_memset(void *s, int c,unsigned int buf);

#endif