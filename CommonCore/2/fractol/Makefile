# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: liferrei <liferrei@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/09/05 12:00:47 by liferrei          #+#    #+#              #
#    Updated: 2025/09/13 08:38:44 by liferrei         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: liferrei <liferrei@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/09/05 12:00:47 by liferrei          #+#    #+#              #
#    Updated: 2025/09/13 08:40:00 by liferrei         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = fractol
CC = cc
CFLAGS = -Wall -Wextra -Werror

MLX_DIR = mlx
LIBFT_DIR = libft
FT_PRINTF_DIR = libft/ft_printf

LIBFT = $(LIBFT_DIR)/libft.a
FT_PRINTF_LIB = $(FT_PRINTF_DIR)/libftprintf.a
MLX = -L$(MLX_DIR) -lmlx -lXext -lX11 -lm

MANDATORY_SRC = \
	main.c ft_draw_julia.c ft_draw_mandelbrot.c \
	ft_init_fractol.c ft_utils.c \
	ft_is_valid.c ft_events.c 

OBJ = $(MANDATORY_SRC:.c=.o)

all: $(NAME)

$(FT_PRINTF_LIB):
	make -C $(FT_PRINTF_DIR)

$(LIBFT):
	make -C $(LIBFT_DIR)

$(NAME): $(OBJ) $(FT_PRINTF_LIB) $(LIBFT)
	$(CC) $(CFLAGS) $(OBJ) $(MLX) -L$(LIBFT_DIR) -lft $(FT_PRINTF_LIB) -o $(NAME)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	make -C $(LIBFT_DIR) clean
	make -C $(FT_PRINTF_DIR) clean
	rm -f $(OBJ)

fclean: clean
	make -C $(LIBFT_DIR) fclean
	make -C $(FT_PRINTF_DIR) fclean
	rm -f $(NAME)

re: fclean all