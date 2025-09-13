/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   minitalk.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: liferrei <liferrei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/12 10:55:48 by liferrei          #+#    #+#             */
/*   Updated: 2025/09/13 06:43:02 by liferrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MINITALK_H
# define MINITALK_H

# include <stdlib.h>
# include <signal.h>
# include <unistd.h>

#include "libft.h"
#include "ft_printf.h" 

typedef struct s_server
{
	pid_t		client_pid;
	int			bit_count;
	int			current_char;
}				t_server;

typedef struct s_client
{
	pid_t		server_pid;
}				t_client;

void	ft_send_char(pid_t server_pid, unsigned char c);
void	ft_send_bit(pid_t server_pid, int bit);

#endif