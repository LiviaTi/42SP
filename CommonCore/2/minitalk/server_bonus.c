/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   server_bonus.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: liferrei <liferrei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/19 15:34:37 by liferrei          #+#    #+#             */
/*   Updated: 2025/09/19 17:56:50 by liferrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minitalk_bonus.h"

#include "minitalk.h"

static t_msg	g_msg;

static void	handle_signal(int sig, siginfo_t *info, void *context)
{
	(void)context;
	if (g_msg.client_pid != info->si_pid)
	{
		g_msg.client_pid = info->si_pid;
		g_msg.bit_count = 0;
		g_msg.current_char = 0;
	}
	g_msg.current_char = (g_msg.current_char << 1) | (sig == SIGUSR2);
	g_msg.bit_count++;
	if (g_msg.bit_count == 8)
	{
		if (g_msg.current_char == '\0')
			write(1, "\n", 1);
		else
			write(1, &g_msg.current_char, 1);
		g_msg.bit_count = 0;
		g_msg.current_char = 0;
		kill(g_msg.client_pid, SIGUSR1);
	}
}

int	main(void)
{
	struct sigaction	sa;

	ft_printf("Server PID: %d\n", getpid());
	g_msg.client_pid = 0;
	g_msg.bit_count = 0;
	g_msg.current_char = 0;
	sa.sa_sigaction = handle_signal;
	sigemptyset(&sa.sa_mask);
	sa.sa_flags = SA_SIGINFO;
	sigaction(SIGUSR1, &sa, NULL);
	sigaction(SIGUSR2, &sa, NULL);
	while (1)
		pause();
	return (0);
}
