# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jingtan <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/07/10 23:46:34 by jingtan           #+#    #+#              #
#    Updated: 2023/07/11 17:12:39 by jingtan          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS	= src/main.c
OBJS	= ${SRCS:.c=.o}
INCS	= includes
NAME	= ft_display_file
CC	= gcc
RM	= rm -f
FLAGS	= -Wall -Wextra -Werror

.c.o	:
	${CC} ${FLAGS} -c $< -o ${<:.c=.o} -I ${INCS}

${NAME}	: ${OBJS}
	${CC} ${FLAGS} ${OBJS} -o ${NAME}

all	: ${NAME}

clean	:
	${RM} ${OBJS}

fclean	: clean
	${RM} ${NAME}

re	: fclean all

.PHONY: all clean fclean re .c.o

