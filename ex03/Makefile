NAME = Bureaucrat_and_bondman_from_the_university
CC = clang++
FLAGS = -Wall -Wextra -Werror
INCLUDE = -I.
HEADER = Bureaucrat.hpp Form.hpp PresidentialPardonForm.hpp RobotomyRequestForm.hpp ShrubberyCreationForm.hpp Intern.hpp
SRCS =	Bureaucrat.cpp \
		Form.cpp \
		PresidentialPardonForm.cpp \
		RobotomyRequestForm.cpp \
		ShrubberyCreationForm.cpp \
		Intern.cpp \
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