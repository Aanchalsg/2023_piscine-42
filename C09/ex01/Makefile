# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aasharma <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/07/12 17:52:04 by aasharma          #+#    #+#              #
#    Updated: 2023/07/12 18:21:34 by aasharma         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
INCLUDES = ./includes/
SRC = ft_putchar.c ft_swap.c ft_putstr.c ft_strlen.c ft_strcmp.c
PRE = ./srcs/
SRCS = ${addprefix ${PRE}, ${SRC}}
OBJS = ${SRCS:.c=.o}
CFLAGS = -Wall -Wextra -Werror -I ${INCLUDES}

.PHONY: all clean fclean re

all: ${NAME}
$(NAME): ${OBJS}
	ar rcs ${NAME} ${OBJS}
%.o: %.c
	cc $(CFLAGS) -o $@ -c $<
clean:
	rm -f ${OBJS}
fclean: clean
	rm -f ${NAME}
re: fclean all
