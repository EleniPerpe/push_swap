# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: eperperi <eperperi@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/03/19 19:47:32 by eperperi          #+#    #+#              #
#    Updated: 2024/04/14 14:00:28 by eperperi         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = cc

CFLAGS = -Wall -Wextra -Werror

SRCS = push_swap.c utils.c ft_split.c reverse_rotate_commands.c rotate_commands.c utils_2.c push_commands.c

OFILES = $(SRCS:.c=.o)

NAME = libftprintf.a

all: $(NAME)

$(NAME): $(OFILES)
	ar rcs $(NAME) $(OFILES)

clean:
	$(RM) -f $(OFILES)

fclean: clean
	$(RM) -f $(NAME)

re: fclean all

.PHONY:  all clean fclean re bonus
