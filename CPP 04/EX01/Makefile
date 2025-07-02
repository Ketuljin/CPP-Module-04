# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jkerthe <jkerthe@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/05/02 08:57:31 by jkerthe           #+#    #+#              #
#    Updated: 2025/05/14 10:33:27 by jkerthe          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

INCLUDES = Zombie.hpp

SRC = main.cpp Animal.cpp Cat.cpp Dog.cpp WrongAnimal.cpp WrongCat.cpp Brain.cpp

NAME = Zombie

OBJ = $(SRC:.cpp=.o)

FLAGS = -std=c++98 -g -Wall -Werror -Wextra -MMD

CC = c++

DEP	=	$(OBJ:.o=.d)

%.o: %.cpp
	$(CC) $(FLAGS) -c $< -o $@

all		: $(NAME)

$(NAME)	:  $(OBJ) Makefile
	$(CC) $(FLAGS) $(OBJ) -o $(NAME)

clean	:
	rm -rf $(OBJ)
	rm -rf $(DEP)
fclean	: clean
	rm -rf $(NAME)

re	: fclean all

-include $(DEP)

.PHONY: all clean fclean re
