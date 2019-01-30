# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: akali <marvin@42.fr>                       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/08/11 14:06:51 by akali             #+#    #+#              #
#    Updated: 2018/08/11 21:37:32 by jcope            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = colle-2
SRCS = ./srcs/rush_2.c ./srcs/utility.c ./srcs/find_rush_combo.c ./srcs/ft_putnbr.c 
RSRCS = ./rushes/ft_atoi.c 
RUSHES = ./rushes/rush00.c ./rushes/rush01.c ./rushes/rush02.c ./rushes/rush03.c ./rushes/rush04.c
OUT = *.o

INCLUDE = ./include
FLAG = -Wall -Werror -Wextra


all: $(NAME)
	
$(NAME): 
	gcc $(SRCS) $(RUSHES) -Wall -Werror -Wextra -o $(NAME) -I $(INCLUDE)
	gcc $(RSRCS) ./rushes/main00.c ./rushes/rush00.c $(FLAG) -o colle-00
	make clean
	gcc $(RSRCS) ./rushes/main01.c ./rushes/rush01.c $(FLAG) -o colle-01
	make clean  
	gcc $(RSRCS) ./rushes/main02.c ./rushes/rush02.c $(FLAG) -o colle-02 
	make clean 
	gcc $(RSRCS) ./rushes/main03.c ./rushes/rush03.c $(FLAG) -o colle-03 
	make clean 
	gcc $(RSRCS) ./rushes/main04.c ./rushes/rush04.c $(FLAG) -o colle-04  
	make clean
	
clean:
	rm -f $(OUT)
	rm -f ./bin/$(OUT)

fclean: clean
	rm -rf ./bin
	rm -f $(NAME)

