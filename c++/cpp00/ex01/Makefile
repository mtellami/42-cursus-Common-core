# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mtellami <mtellami@student.1337.ma>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/03/20 00:56:22 by mtellami          #+#    #+#              #
#    Updated: 2023/03/25 13:44:36 by mtellami         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = phonebook
CPPFLAGS = -Wall -Wextra -Werror -std=c++98

SRC = PhoneBook.cpp Contact.cpp main.cpp

OBJ = $(SRC:.cpp=.o)

all : $(NAME)

$(NAME) : $(OBJ)
	c++ $(CPPFLAGS) $(OBJ) -o $(NAME)

clean :
	rm -fr $(OBJ)

fclean : clean
	rm -fr $(NAME)

re : fclean all