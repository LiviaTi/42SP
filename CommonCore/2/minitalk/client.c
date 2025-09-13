/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   client.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: liferrei <liferrei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/12 10:53:55 by liferrei          #+#    #+#             */
/*   Updated: 2025/09/13 02:16:22 by liferrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minitalk.h"

static t_client g_client;

void	ft_send_bit(pid_t server_pid, int bit)
{
	int	ret;

	if (bit)
		ret = kill(server_pid, SIGUSR2);
	else
		ret = kill(server_pid, SIGUSR1);

	if (ret == -1)
	{
		ft_printf("Error seding signal \n");
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
		ft_send_bit(server_pid, (c >> i) & 1);
		i--;
	}
}
int main(int argc, char **argv)
{
	size_t	i;

	i = 0;
	if (argc != 3)
	{
		ft_printf("usage: %s <server_pid) \"message\"\n", argv[0]);
		return (1);
	}
	g_client.server_pid = (pid_t)ft_atoi(argv[1]);
	if (g_client.server_pid <= 0)
	{
		ft_printf("Invalid PID \n");
		return(1);
	}
	while (argv[2][i])
	{
		ft_send_char(g_client.server_pid, (unsigned char)argv[2][i]);
		i++;
	}
	ft_send_char(g_client.server_pid, '\0');
	return (0);
}
