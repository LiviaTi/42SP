/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   server.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: liferrei <liferrei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/12 10:53:51 by liferrei          #+#    #+#             */
/*   Updated: 2025/09/12 20:47:21 by liferrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minitalk.h"
#include <stdio.h>

void ft_signal_handler(int sig_num)
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
    struct sigaction    sa;
    pid_t               server_pid;

    sa.sa_flags = SA_SIGINFO;
    sigemptyset(&sa.sa_mask);
    sa.sa_sigaction = &ft_signal_handle;
    if (sigaction(SIGUSR1, &sa, NULL) == -1)
        return (1);
    if (sigaction(SIGUSR2, &sa, NULL) == -1)
        return (1);
    server_pid = getpid();
    ft_printf("Server PID: %d\n", server_pid);
    while (1)
        pause();
    return (0);
}