# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: obouya <obouya@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/03/02 17:46:28 by obouya            #+#    #+#              #
#    Updated: 2023/03/04 23:43:10 by obouya           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = cc

NAME = push_swap

FLAGS = -Wall -Wextra -Werror 

SRC = linked_lists.c r_operations.c s_operations.c test_main.c

OBJ = $(SRC:.c=.o)

all : $(NAME)

$(NAME): $(OBJ) push_swap.h
		$(CC) $(FLAGS) $(OBJ) -o $(NAME)

%.o : %.c push_swap.h
	$(CC) $(FLAGS)  -c $< -o $@ 

clean :
	rm -rf $(OBJ)
fclean : clean
	rm -rf $(NAME)

re : fclean all 