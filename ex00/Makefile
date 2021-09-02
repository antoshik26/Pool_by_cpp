NAME = convert
CC = clang++
FLAGS = -Wall -Wextra -Werror
INCLUDE = -I.
HEADER = Type_conversion.hpp
SRCS =	Type_conversion.cpp \
		main.cpp

OBJS = ${SRCS:.cpp=.o}

%.o: %.cpp
	${CC} ${FLAGS} -o -I. -c $< -o ${<:.cpp=.o}

all:	${NAME}

${NAME}:	${OBJS}
			${CC} ${FLAGS} -I. -o ${NAME} ${OBJS}

clean:
		rm -rf ${OBJS}

fclean:
		rm -rf ${OBJS} ${NAME}

re:		fclean all

.PHONY:
		all clean fclean rew