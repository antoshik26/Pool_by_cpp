NAME = death_note
CC = clang++
FLAGS = -Wall -Wextra -Werror
INCLUDE = -I include
HEADER = ./include/death_note.hpp
SRCS =	./include/death_note.cpp \
		death_note.cpp

OBJS = ${SRCS:.cpp=.o}

%.o: %.cpp ${HEADER}
	${CC} -o ${FLAGS} ${INCLUDE} -c $< -o ${<:.cpp=.o}

all:	${NAME}

${NAME}:	${OBJS}
			${CC} -o ${NAME} ${OBJS}

clean:
		rm -rf ${OBJS}

fclean:
		rm -rf ${OBJS} ${NAME}

re:		fclean all

.PHONY:
		all clean fclean re