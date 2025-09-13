# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: liferrei <liferrei@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/09/05 12:00:47 by liferrei          #+#    #+#              #
#    Updated: 2025/09/12 20:26:57 by liferrei         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = cc
CFLAGS = -Wall -Wextra -Werror
LIBFT_DIR = libft
LIBFT= $(LIBFT_DIR)/libft.a
INCLUDES = -I $(LIBFT_DIR) -I $(LIBFT_DIR)/ft_printf

NAME_SRCS = server.c client.c

SERVER = server
CLIENT = client

all: $(LIBFT) $(SERVER) $(CLIENT)

$(LIBFT):
	@$(MAKE) -C $(LIBFT_DIR)

$(SERVER): server.c minitalk.h $(LIBFT)
	$(CC) $(CFLAGS) $(INCLUDES) server.c $(LIBFT) -o $(SERVER)

$(CLIENT): client.c minitalk.h $(LIBFT)
	$(CC) $(CFLAGS) $(INCLUDES) client.c $(LIBFT) -o $(CLIENT)

clean:
	@$(MAKE) -C $(LIBFT_DIR) clean
	@rm -f *.o

fclean: clean
	@$(MAKE) -C $(LIBFT_DIR) fclean
	@rm -f $(SERVER) $(CLIENT)

re: fclean all

.PHONY: all clean fclean re