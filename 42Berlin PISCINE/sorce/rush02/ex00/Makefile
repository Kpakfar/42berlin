# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: bkirov <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/07/09 15:34:07 by bkirov            #+#    #+#              #
#    Updated: 2022/07/10 15:22:13 by bkirov           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME= rush-02

FDIR = files/

SRCS = $(FDIR)ft_dic.c $(FDIR)ft_string.c $(FDIR)headers.h $(FDIR)main.c

CC= gcc

CFLAGS= -Wall -Wextra -Werror

OBJ= ft_dic.o ft_string.o main.o

all: $(NAME)

$(NAME):
	$(CC) $(CFLAGS) -c $(SRCS)
	$(CC) $(OBJ) -o $(NAME)

clean:
	rm -f $(OBJ) $(FDIR)headers.h.gch

fclean: clean
	rm -f $(NAME)

re: fclean all
