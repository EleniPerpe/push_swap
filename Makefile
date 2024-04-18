# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: eperperi <eperperi@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/03/19 19:47:32 by eperperi          #+#    #+#              #
#    Updated: 2024/04/17 14:50:18 by eperperi         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = push_swap

CC = cc

CFLAGS = -Wall -Wextra -Werror

FSANITIZER = -g -fsanitize=address

SOURCES  =  push_swap.c utils.c ft_split.c reverse_rotate_commands.c rotate_commands.c \
struct_commands.c push_commands.c ft_memmove.c swap_commads.c error_checks.c \
 sorting_algorithms.c radix.c

OBJS = $(SOURCES:.c=.o)

all: $(NAME)

$(NAME): $(OBJS)
	$(CC) $(CFLAGS) $(FSANITIZER) $(OBJS) -o $(NAME)

clean:
	rm -rf $(OBJS)

fclean: clean
	rm -rf $(NAME)

re: fclean all

t: $(NAME)
	./$(NAME) 5 7 3