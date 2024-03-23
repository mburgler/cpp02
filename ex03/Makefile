# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mburgler <mburgler@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/12/27 21:00:36 by mburgler          #+#    #+#              #
#    Updated: 2024/03/23 16:03:20 by mburgler         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

################################################################################
#                                     CONFIG                                   #
################################################################################

NAME        := fixed
CC         := c++
FLAGS    := -Wall -Wextra -Werror -std=c++98 -pedantic
 
################################################################################
#                                 PROGRAM'S SRCS                               #
################################################################################

SRCS        :=      main.cpp \
                          Fixed.cpp \
                          bsp.cpp \
                          Point.cpp \
                          
OBJS        := ${SRCS:.cpp=.o}

.cpp.o:
	${CC} ${FLAGS} -c $< -o ${<:.cpp=.o}

################################################################################
#                                  Makefile  objs                              #
################################################################################


CLR_RMV		:= \033[0m
RED		    := \033[1;31m
GREEN		:= \033[1;32m
YELLOW		:= \033[1;33m
BLUE		:= \033[1;34m
CYAN 		:= \033[1;36m
RM		    := rm -f

${NAME}:	${OBJS}
			@echo "$(GREEN)compiling ${CLR_RMV}${CYAN}$(NAME) ${CLR_RMV}..."
			${CC} ${FLAGS} -o ${NAME} ${OBJS}
			@echo "$(BLUE)### $(GREEN)$(NAME) created $(BLUE)###${CLR_RMV}"

all:		${NAME}

bonus:		all

clean:
			@ ${RM} *.o */*.o */*/*.o
			@ echo "$(RED)deleting $(CYAN)$(NAME) $(CLR_RMV)objs "

fclean:		clean
			@ ${RM} ${NAME}
			@ echo "$(RED)deleting $(CYAN)$(NAME) $(CLR_RMV)binary"

re:			fclean all

.PHONY:		all clean fclean re


