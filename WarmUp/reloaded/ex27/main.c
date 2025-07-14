/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: liferrei <liferrei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/11 16:09:30 by liferrei          #+#    #+#             */
/*   Updated: 2025/07/11 16:37:41 by liferrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_display_file(char *filename);
void	ft_putstr(char *str);

int	main(int argc, char **argv)
{
	if (argc < 2)
	{
		ft_putstr("File name missing.\n");
		return (1);
	}
	if (argc > 2)
	{
		ft_putstr("Too many arguments.\n");
		return (1);
	}
	ft_display_file(argv[1]);
	return (0);
}
