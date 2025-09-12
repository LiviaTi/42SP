/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   server.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: liferrei <liferrei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/12 10:53:51 by liferrei          #+#    #+#             */
/*   Updated: 2025/09/12 13:18:43 by liferrei         ###   ########.fr       */
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
int main (void)
{
	pid_t				server_pid;
	struct sig_action	sig_action;
	

	server_pid = getpid();

	printf("Server PID: %d\n", server_pid);
	sigemptyset(&sig_action.sa_mask);
	sig_action.sa_flags = 0;
	sig_action.sa_handler = ft_signal_handler;
	
	sigaction(SIGUSR1, &sig_action, NULL);
	sigaction(SIGUSR2, &sig_action, NULL);
	
	while (1)
	{
		pause();
	}
	return (0);

}