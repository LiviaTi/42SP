/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   server.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: liferrei <liferrei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/12 10:53:51 by liferrei          #+#    #+#             */
/*   Updated: 2025/09/12 13:23:37 by liferrei         ###   ########.fr       */
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
	struct s_sgnal		;
	

	server_pid = getpid();

	printf("Server PID: %d\n", server_pid);
	sigemptyset(&sig_action.sa_mask);

	


}