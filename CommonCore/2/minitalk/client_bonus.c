/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   client_bonus.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: liferrei <liferrei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/19 15:34:24 by liferrei          #+#    #+#             */
/*   Updated: 2025/09/19 18:25:22 by liferrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minitalk_bonus.h"

static t_client	g_client;

static void	handle_ack(int sig)
{
	if (sig == SIGUSR1)
		g_client.ack = 1;
	else if (sig == SIGUSR2)
	{
		ft_printf("Message received\n");
		g_client.ack = 1;
	}
}

void	send_bit(pid_t server_pid, int bit)
{
	int	ret;

	if (bit)
		ret = kill(server_pid, SIGUSR2);
	else
		ret = kill(server_pid, SIGUSR1);
	if (ret == -1)
	{
		write(2, "Error sending signal\n", 21);
		exit(1);
	}
	usleep(100);
}

void	send_char(pid_t server_pid, unsigned char c)
{
	int	i;

	i = 7;
	while (i >= 0)
	{
		send_bit(server_pid, (c >> i) & 1);
		i--;
	}
	while (!g_client.ack)
		pause();
	g_client.ack = 0;
}

int	main(int argc, char **argv)
{
	size_t	i;

	if (argc != 3)
	{
		ft_printf("Usage: %s <server_pid> \"message\"\n", argv[0]);
		return (1);
	}
	g_client.server_pid = (pid_t)ft_atoi(argv[1]);
	g_client.ack = 0;
	if (g_client.server_pid <= 0)
	{
		write(2, "Invalid PID\n", 12);
		return (1);
	}
	signal(SIGUSR1, handle_ack);
	signal(SIGUSR2, handle_ack);
	i = 0;
	while (argv[2][i])
		send_char(g_client.server_pid, (unsigned char)argv[2][i++]);
	send_char(g_client.server_pid, '\0');
	return (0);
}