# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mtellami <mtellami@student.1337.ma>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/03/29 10:56:31 by mtellami          #+#    #+#              #
#    Updated: 2023/03/30 00:06:23 by mtellami         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = polymorphism
CPPFLAGS = -Wall -Wextra -Werror -std=c++98

SRC = main.cpp Animal.cpp Dog.cpp Cat.cpp WrongAnimal.cpp WrongCat.cpp\

OBJ = $(SRC:.cpp=.o)

all : $(NAME)

$(NAME) : $(OBJ)
	c++ $(CPPFLAGS) $(OBJ) -o $(NAME)

clean :
	rm -fr $(OBJ)

fclean : clean
	rm -fr $(NAME)

re : fclean all
