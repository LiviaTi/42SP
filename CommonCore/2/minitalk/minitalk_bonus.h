/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   minitalk_bonus.h                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: liferrei <liferrei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/19 15:35:41 by liferrei          #+#    #+#             */
/*   Updated: 2025/09/19 18:19:08 by liferrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MINITALK_H
# define MINITALK_H

# include <stdlib.h>
# include <signal.h>
# include <unistd.h>

# include "libft.h"
# include "ft_printf.h" 

typedef struct s_server
{
	pid_t		client_pid;
	int			bit_count;
	int			current_char;
}				t_server;

typedef struct s_client
{
	pid_t		server_pid;
	int			ack;
}				t_client;
#endif