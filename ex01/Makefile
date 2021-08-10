NAME = death_note
CC = clang++
FLAGS = -Wall -Wextra -Werror
INCLUDE = -I include
HEADER = ./include/death_note.hpp ./includede/PhoneBook.hpp
SRCS =	./include/death_note.cpp \
		./include/PhoneBook.cpp \
		main.cpp

OBJS = ${SRCS:.cpp=.o}

%.o: %.cpp
	${CC} -o ${INCLUDE} -c $< -o ${<:.cpp=.o}

all:	${NAME}

${NAME}:	${OBJS}
			${CC} ${INCLUDE} -o ${NAME} ${OBJS}

clean:
		rm -rf ${OBJS}

fclean:
		rm -rf ${OBJS} ${NAME}

re:		fclean all

.PHONY:
		all clean fclean re