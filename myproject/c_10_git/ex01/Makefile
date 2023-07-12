# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jingtan <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/07/11 16:51:26 by jingtan           #+#    #+#              #
#    Updated: 2023/07/11 19:45:03 by jingtan          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS	= srcs/main.c srcs/read.c srcs/general.c
OBJS	= ${SRCS:.c=.o}
INCS	= includes
CFLAGS	= -Wall -Wextra -Werror
CC	= gcc
NAME	= ft_cat
RM	= rm -f

.c.o	: 
	${CC} ${CFLAGS} -c $< -I ${INCS} -o ${<:.c=.o}

${NAME}	: ${OBJS}
	${CC} ${CLAGS} ${OBJS} -o ${NAME}

all	: ${NAME}

clean	:
	${RM} ${OBJS}

fclean	: clean
	${RM} ${NAME}

re	: fclean all

.PHONY	: .c.o all clean fclean re
