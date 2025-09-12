/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   client.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: liferrei <liferrei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/12 10:53:55 by liferrei          #+#    #+#             */
/*   Updated: 2025/09/12 12:43:08 by liferrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minitalk.h"

int main (void)
{
	pid_t	server_pid;
	
	server_pid = getpid();

	ft_printf("Server PID: %d\n", server_pid);
    return (0);

}
