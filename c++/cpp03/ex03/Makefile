# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mtellami <mtellami@student.1337.ma>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/03/29 04:05:06 by mtellami          #+#    #+#              #
#    Updated: 2023/04/05 00:19:40 by mtellami         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = diamondTrap
CPPFLAGS = -Wall -Wextra -Werror -Wshadow -std=c++98

SRC = main.cpp ClapTrap.cpp ScavTrap.cpp FragTrap.cpp DiamondTrap.cpp\

OBJ = $(SRC:.cpp=.o)

all : $(NAME)

$(NAME) : $(OBJ)
	c++ $(CPPFLAGS) $(OBJ) -o $(NAME)

clean :
	rm -fr $(OBJ)

fclean : clean
	rm -fr $(NAME)

re : fclean all
