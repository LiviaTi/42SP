# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: liferrei <liferrei@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/09/05 12:00:47 by liferrei          #+#    #+#              #
#    Updated: 2025/09/09 17:20:22 by liferrei         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = fractol
CC = cc
CFLAGS = -Wall -Wextra -Werror

MLX_DIR = mlx
LIBFT_DIR = libft
MLX = -L$(MLX_DIR) -lmlx -lXext -lX11 -lm
INC = -I$(MLX_DIR)

MANDATORY_SRC = \
	main.c ft_draw_julia.c ft_draw_mandelbrot.c \
	ft_color.c ft_init_fractol.c ft_utils.c \
	ft_args.c ft_complex.c ft_events.c 


SRC = $(MANDATORY_SRC) $(FT_PRINTF_SRC)
OBJ = $(SRC:.c=.o)


all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(CFLAGS) $(OBJ) $(INC) $(MLX) -o $(NAME)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@ $(INC)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all
