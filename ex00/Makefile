# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: fvoicu <fvoicu@student.42heilbronn.de>     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/04/13 01:44:27 by fvoicu            #+#    #+#              #
#    Updated: 2024/04/13 01:52:55 by fvoicu           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	:=	zombie
CC		:=	c++
FLAGS	:=	-Wall -Wextra -Werror -std=c++98
SRC		:=	main.cpp newZombie.cpp randomChump.cpp Zombie.cpp
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
	
