# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: pnardozi <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/11/07 10:11:15 by pnardozi          #+#    #+#              #
#    Updated: 2017/11/07 10:11:20 by pnardozi         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = gcc

CFLAGS = -c -Wall -Werror -Wextra

NAME = libft.a

SRCS = srcs/ft_putchar.c srcs/ft_putstr.c srcs/ft_strcmp.c \
       srcs/ft_strlen.c srcs/ft_swap.c

INCLUDES = includes/

all: $(NAME)

$(NAME):
	$(CC) $(CFLAGS) $(SRCS) -I $(INCLUDES)
	ar rc $(NAME) ft_putchar.o ft_swap.o ft_putstr.o ft_strlen.o ft_strcmp.o
	ranlib $(NAME)
clean:
	/bin/rm -f ft_putchar.o ft_swap.o ft_putstr.o ft_strlen.o ft_strcmp.o

fclean: clean
	/bin/rm -f $(NAME)

re: fclean all
