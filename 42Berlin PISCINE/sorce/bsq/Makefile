# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: gbooth, kpakfar <marvin@42.fr>             +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/07/09 17:44:03 by bkirov, kpa       #+#    #+#              #
#    Updated: 2022/07/13 23:11:11 by kpakfar          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME= bsq

FDIR = files/

SRCS = $(FDIR)algo_solve.c $(FDIR)algo_print.c $(FDIR)ft_string.c $(FDIR)headers.h $(FDIR)main.c $(FDIR)messages.c $(FDIR)map_convert.c $(FDIR)freemap.c

CC= gcc

CFLAGS= -Wall -Wextra -Werror

OBJ= algo_solve.o algo_print.o ft_string.o main.o messages.o map_convert.o freemap.o

all: $(NAME)

$(NAME):
	$(CC) $(CFLAGS) -c $(SRCS)
	$(CC) $(OBJ) -o $(NAME)

clean:
	rm -f $(OBJ) $(FDIR)headers.h.gch

fclean: clean
	rm -f $(NAME)

re: fclean all
