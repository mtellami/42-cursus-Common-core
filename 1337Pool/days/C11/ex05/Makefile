# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mtellami <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/08/11 20:31:16 by mtellami          #+#    #+#              #
#    Updated: 2022/08/11 20:50:34 by mtellami         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS	= srcs/do-op.c srcs/addition.c srcs/subtraction.c srcs/multiplication.c srcs/modulo.c srcs/atoi.c srcs/division.c srcs/putnbr.c
OBJS	= ${SRCS:.c=.o}
NAME	= do-op
CC		= gcc
RM		= rm -f
CFLAGS	= -Wall -Wextra -Werror

all:
	${CC} ${CFLAGS}  ${SRCS} -o ${NAME}

clean:
	${RM} ${OBJS}

fclean: clean
	${RM} ${NAME}

re: fclean all
