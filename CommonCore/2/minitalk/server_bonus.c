/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   server_bonus.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: liferrei <liferrei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/19 15:34:37 by liferrei          #+#    #+#             */
/*   Updated: 2025/09/19 18:26:00 by liferrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minitalk_bonus.h"

static t_server	g_server;

static void	handle_signal(int sig, siginfo_t *info, void *context)
{
	(void)context;
	if (g_server.client_pid != info->si_pid)
	{
		g_server.client_pid = info->si_pid;
		g_server.bit_count = 0;
		g_server.current_char = 0;
	}
	g_server.current_char = (g_server.current_char << 1) | (sig == SIGUSR2);
	g_server.bit_count++;
	if (g_server.bit_count == 8)
	{
		if (g_server.current_char == '\0')
		{
			write(1, "\n", 1);
			kill(g_server.client_pid, SIGUSR2);
		}
		else
		{
			write(1, &g_server.current_char, 1);
			kill(g_server.client_pid, SIGUSR1);
		}
		g_server.bit_count = 0;
		g_server.current_char = 0;
	}
}

int	main(void)
{
	struct sigaction	sa;

	ft_printf("Server PID: %d\n", getpid());
	g_server.client_pid = 0;
	g_server.bit_count = 0;
	g_server.current_char = 0;
	sa.sa_sigaction = handle_signal;
	sigemptyset(&sa.sa_mask);
	sa.sa_flags = SA_SIGINFO;
	sigaction(SIGUSR1, &sa, NULL);
	sigaction(SIGUSR2, &sa, NULL);
	while (1)
		pause();
	return (0);
}
