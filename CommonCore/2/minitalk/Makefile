# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: liferrei <liferrei@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/09/05 12:00:47 by liferrei          #+#    #+#              #
#    Updated: 2025/09/13 06:51:06 by liferrei         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SERVER = server
CLIENT = client
CC = cc
CFLAGS = -Wall -Wextra -Werror -I$(LIBFT_DIR) -I$(FT_PRINTF_DIR)

LIBFT_DIR = libft
FT_PRINTF_DIR = libft/ft_printf

LIBFT = $(LIBFT_DIR)/libft.a
FT_PRINTF_LIB = $(FT_PRINTF_DIR)/libftprintf.a

SRCS_SERVER = server.c
SRCS_CLIENT = client.c

OBJS_SERVER = $(SRCS_SERVER:.c=.o)
OBJS_CLIENT = $(SRCS_CLIENT:.c=.o)

all: $(FT_PRINTF_LIB) $(LIBFT) $(SERVER) $(CLIENT)

$(FT_PRINTF_LIB):
	make -C $(FT_PRINTF_DIR)

$(LIBFT):
	make -C $(LIBFT_DIR)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

$(SERVER): $(OBJS_SERVER)
	$(CC) $(CFLAGS) $(OBJS_SERVER) -L$(LIBFT_DIR) -lft $(FT_PRINTF_LIB) -o $(SERVER)

$(CLIENT): $(OBJS_CLIENT)
	$(CC) $(CFLAGS) $(OBJS_CLIENT) -L$(LIBFT_DIR) -lft $(FT_PRINTF_LIB) -o $(CLIENT)

clean:
	make -C $(LIBFT_DIR) clean
	make -C $(FT_PRINTF_DIR) clean
	rm -f $(OBJS_SERVER) $(OBJS_CLIENT)

fclean: clean
	make -C $(LIBFT_DIR) fclean
	make -C $(FT_PRINTF_DIR) fclean
	rm -f $(SERVER) $(CLIENT)

re: fclean all
