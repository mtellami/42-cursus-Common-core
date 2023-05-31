# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mtellami <mtellami@student.1337.ma>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/03/27 11:26:15 by mtellami          #+#    #+#              #
#    Updated: 2023/03/27 11:26:43 by mtellami         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = fixed
CPPFLAGS = -Wall -Wextra -Werror -std=c++98

SRC = main.cpp Fixed.cpp\

OBJ = $(SRC:.cpp=.o)

all : $(NAME)

$(NAME) : $(OBJ)
	c++ $(CPPFLAGS) $(OBJ) -o $(NAME)

clean :
	rm -fr $(OBJ)

fclean : clean
	rm -fr $(NAME)

re : fclean all