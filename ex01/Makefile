# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: fvoicu <fvoicu@student.42heilbronn.de>     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/04/13 04:17:13 by fvoicu            #+#    #+#              #
#    Updated: 2024/04/13 04:18:19 by fvoicu           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	:=	horde
CC		:=	c++
FLAGS	:=	-Wall -Wextra -Werror -std=c++98
SRC		:=	main.cpp Zombie.cpp zombieHorde.cpp
OBJ		:=	$(SRC:.cpp=.o)

all 	: $(NAME)

$(NAME) : $(OBJ)
	$(CC) $(FLAGS) $(OBJ) -o $(NAME)

clean	:
	rm -rf $(OBJ)

fclean	: clean
	rm -f $(NAME)

re		: fclean all

.PHONY : all clean fclean re
