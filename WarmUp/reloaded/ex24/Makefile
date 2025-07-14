# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: liferrei <liferrei@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/07/10 13:26:06 by liferrei          #+#    #+#              #
#    Updated: 2025/07/11 13:59:22 by liferrei         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


NAME = libft.a


SRCDIR = srcs
INCDIR = includes

CC = gcc
CFLAGS = -Wall -Wextra -Werror -I$(INCDIR)

SRC = \
	$(SRCDIR)/ft_putchar.c \
	$(SRCDIR)/ft_putstr.c \
	$(SRCDIR)/ft_strcmp.c \
	$(SRCDIR)/ft_strlen.c \
	$(SRCDIR)/ft_swap.c


OBJ = $(SRC:.c=.o)


all: $(NAME)

$(NAME): $(OBJ)
	ar rcs $(NAME) $(OBJ)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
