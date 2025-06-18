# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: drhaouha <drhaouha@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/04/27 03:03:03 by drhaouha          #+#    #+#              #
#    Updated: 2025/05/27 11:21:57 by drhaouha         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


BLUE			:= \033[0;34m
GREEN			:= \033[0;32m
ORANGE			:= \033[0;33m
RED				:= \033[0;31m
NC				:= \033[0m

CPP				:= c++

CFLAGS			:= -Wall -Werror -Wextra -std=c++98

NAME			:= animal_brains

SRCS			:= Animal.cpp Dog.cpp Cat.cpp Brain.cpp main.cpp

OBJS			= ${SRCS:.cpp=.o}

%.o: %.cpp
			@${CPP} ${CFLAGS} -c $< -o $@
			@echo "[${BLUE}${NAME}${NC}] : $@ created${NC}"

${NAME}: ${OBJS}
			@${CPP} ${CFLAGS} ${OBJS} -o $@
			@echo "[${GREEN}${NAME}${NC}] : Executable $@ created.${NC}"

all: ${NAME}

clean:
			@rm -f ${OBJS}
			@echo "[${ORANGE}${NAME}${NC}] : Objects removed.${NC}"

fclean: clean
			@rm -f ${NAME}
			@echo "[${RED}${NAME}${NC}] : Executable removed${NC}"

re: fclean all

.PHONY:		fclean clean re all