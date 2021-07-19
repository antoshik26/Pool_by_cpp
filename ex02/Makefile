NAME = megaphone
CC = clang++
FLAGS = -Wall -Wextra -Werror
SRCS = megaphone.cpp

OBJS = ${SRCS:.cpp=.o}

%.o: %.cpp
	${CC} -o ${FLAGS} -c $< -o ${<:.cpp=.o}

all:	${NAME}

${NAME}:	${OBJS}
			${CC} -o ${NAME} ${OBJS}

clean:
		rm -rf ${OBJS}

fclean:
		rm -rf ${OBJS} ${NAME}

re:		fclean all

.PHONY:
		all clean fclean rew