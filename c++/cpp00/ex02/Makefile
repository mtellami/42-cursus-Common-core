# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mtellami <mtellami@student.1337.ma>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/03/21 02:57:58 by mtellami          #+#    #+#              #
#    Updated: 2023/03/24 10:36:13 by mtellami         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = DreamJob
CPPFLAGS = -Wall -Wextra -Werror -std=c++98

SRC = tests.cpp Account.cpp\

OBJ = $(SRC:.cpp=.o)

all : $(NAME)

$(NAME) : $(OBJ)
	c++ $(CPPFLAGS) $(OBJ) -o $(NAME)

clean :
	rm -fr $(OBJ)

fclean : clean
	rm -fr $(NAME)

re : fclean all