# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jingtan <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/07/12 16:45:41 by jingtan           #+#    #+#              #
#    Updated: 2023/07/13 04:25:20 by jingtan          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCFILE	= error.c general.c main.c read_file.c convert_array.c readinput.c checker.c
SRCPATH	= ./srcs/
SRCS	= ${addprefix ${SRCPATH}, ${SRCFILE}}
OBJS	= ${SRCS:.c=.o}
INCS	= includes
RM	= rm -f
CC	= gcc
CFLAGS	= -Wall -Wextra -Werror
NAME	= ft_tail

${NAME}	: ${SRCS}
	${CC} ${CFLAGS} ${SRCS} -g -I ${INCS} -o ${NAME}

all	: ${NAME}

clean	:
	${RM} ${OBJS}

fclean	: clean
	${RM} ${NAME}

re	: fclean all

.PHONY	: re fclean clean all .c.o
