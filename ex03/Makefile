NAME = Bag_in_RPG
CC = clang++
FLAGS = -Wall -Wextra -Werror
INCLUDE = -I.
HEADER = AMateria.hpp Caracter.hpp Cure.hpp ICaracter.hpp Ice.hpp IMateriaSource.hpp MateriaSource.hpp
SRCS =	AMateria.cpp \
		Caracter.cpp \
		Cure.cpp \
		Ice.cpp \
		MateriaSource.cpp \
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