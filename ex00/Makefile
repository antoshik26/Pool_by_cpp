NAME = BraiiiiiiinnnzzzZ
CC = clang++
FLAGS = -Wall -Wextra -Werror
INCLUDE = -I.
SRCS =	Zombie.cpp \
		newZombie.cpp \
		randomChump.cpp \
		main.cpp

OBJS = ${SRCS:.cpp=.o}

%.o: %.cpp
	${CC} ${FLAGS} -o ${INCLUDE} -c $< -o ${<:.cpp=.o}

all:	${NAME}

${NAME}:	${OBJS}
			${CC} ${FLAGS} ${INCLUDE} -o ${NAME} ${OBJS}

clean:
		rm -rf ${OBJS}

fclean:
		rm -rf ${OBJS} ${NAME}

re:		fclean all

.PHONY:
		all clean fclean re