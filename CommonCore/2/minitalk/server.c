/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   server.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: liferrei <liferrei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/12 10:53:51 by liferrei          #+#    #+#             */
/*   Updated: 2025/09/12 22:56:35 by liferrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minitalk.h"

static t_server	g_server;

static void	ft_signal_handle(int sig, sig)
{
	if (sig_num == SIGUSR1)
	{
		// bit 0
	}
	else if (sig_num == SIGUSR2)
	{
		// bit 1	
	}
}
int main(void)
{
	struct sigaction	sa;

	ft_printf("Server PID: %d\n", getpid());
	g_server.client_pid = 0;
	g_server.bit_count = 0;
	g_server.current_char = 0;
	sa.sa_sigaction = ft_signal_handle;
	while (1)
		pause();
	return (0);
}