NAME = Zoo
CC = clang++
FLAGS = -Wall -Wextra -Werror
INCLUDE = -I.
HEADER = Animal.hpp Cat.hpp Dog.hpp WrongAnimal.hpp WrongCat.hpp
SRCS =	WrongAnimal.cpp \
		WrongCat.cpp \
		Animal.cpp \
		Cat.cpp \
		Dog.cpp \
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