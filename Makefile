# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: pmota-ga <pmota-ga@student.42malaga.com    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/11/21 10:31:34 by pmota-ga          #+#    #+#              #
#    Updated: 2025/11/21 11:00:21 by pmota-ga         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a
CC = cc

CFLAGS = -g -Wall -Wextra -Werror

SRC = ft_print_char.c ft_print_hex.c ft_print_nbr.c \
ft_print_pointer.c ft_print_str.c ft_print_unsigned.c ft_printf.c

OBJ = $(SRC:.c=.o)

HEADERS = ft_printf.h

all: $(NAME)

$(NAME): $(OBJ)
	ar rcs $(NAME) $(OBJ)

%.o: %.c $(HEADERS)
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all