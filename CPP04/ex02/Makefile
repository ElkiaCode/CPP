# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: cparodi <cparodi@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/04/22 09:30:05 by cparodi           #+#    #+#              #
#    Updated: 2025/06/29 07:48:43 by cparodi          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# Program Executable
EXE = Classe_abstraite

# Files
SRC =		main.cpp \
			Animal.cpp \
			Dog.cpp \
			Cat.cpp \
			WrongAnimal.cpp \
			WrongCat.cpp \
			Brain.cpp \


SOURCES =		${SRC}
OBJECTS =		${SOURCES:.cpp=.o}

# Variables
CC		= c++
CFLAGS	= -std=c++98 -Wall -Werror -Wextra
RM		= rm -f

# Loading Bar
RESET		= \e[0m
UP			= \e[A

WHITE		= \e[0;1;97m
_WHITE		= \e[1;4;97m
RED			= \e[0;1;31m
GREEN		= \e[0;1;32m
_GREEN		= \e[1;4;32m

FILE_COUNT	= 0
FILE_TOTAL	= 7
BAR_SIZE	= ${shell expr 100 \* ${FILE_COUNT} / ${FILE_TOTAL}}
BAR_LOAD	= ${shell expr 23 \* ${FILE_COUNT} / ${FILE_TOTAL}}
BAR_REST	= ${shell expr 23 - ${BAR_LOAD}}

# Makefile
all:		${EXE}

${EXE}:		${OBJECTS}
		@${CC} ${CFLAGS} ${OBJECTS} -o ${EXE}
		@echo "\n\n${GREEN}[✓] - ${_GREEN}Classe abstraite${GREEN} Successfully Compiled!${RESET}"

%.o:		%.cpp
		@${eval FILE_COUNT = ${shell expr ${FILE_COUNT} + 1}}
		@${CC} ${CFLAGS} -c $? -o $@
		@echo "${WHITE}[!] - Compilation loading...${RESET}"
		@printf "${WHITE}[${GREEN}%-.${BAR_LOAD}s${RED}%-.${BAR_REST}s${WHITE}] [%d/%d (%d%%)]${RESET}" "#######################" "#######################" ${FILE_COUNT} ${FILE_TOTAL} ${BAR_SIZE}
		@echo ""
		@echo "${UP}${UP}${UP}"

clean:
		@${RM} ${OBJECTS}
		@echo "${WHITE}[!] - ${_WHITE}Classe abstraite${WHITE} Successfully Cleaned!${RESET}"

fclean: clean
		@${RM} ${OBJECTS} ${EXE}
re:			fclean all

.PHONY: all clean fclean re
