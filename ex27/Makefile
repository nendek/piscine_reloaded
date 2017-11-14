# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: pnardozi <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/11/07 10:16:21 by pnardozi          #+#    #+#              #
#    Updated: 2017/11/07 10:16:25 by pnardozi         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

C = gcc

CFLAG = -Werror -Wall -Wextra

NAME = ft_display_file

SRCS = srcs/display_file.c

all: $(NAME)

$(NAME):
	$(CC) -c $(CFLAG) $(SRCS)
	$(CC) $(CFLAG) -o $(NAME) display_file.o

clean: 
	/bin/rm -f display_file.o

fclean: clean
	/bin/rm -f $(NAME)
