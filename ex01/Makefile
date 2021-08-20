NAME = karenFilter
CC = clang++
FLAGS = -Wall -Wextra -Werror
INCLUDE = -I.
HEADER = Karen.hpp
SRCS =	Karen.cpp \
		main.cpp

OBJS = ${SRCS:.cpp=.o}

%.o: %.cpp
	${CC} -o -I. -c $< -o ${<:.cpp=.o}

all:	${NAME}

${NAME}:	${OBJS}
			${CC}  -I. -o ${NAME} ${OBJS}

clean:
		rm -rf ${OBJS}

fclean:
		rm -rf ${OBJS} ${NAME}

re:		fclean all

.PHONY:
		all clean fclean rew