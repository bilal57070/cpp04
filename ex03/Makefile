SRCS =  main.cpp MateriaSource.cpp Ice.cpp Cure.cpp Character.cpp AMateria.cpp
OBJS = ${SRCS:.cpp=.o}
NAME = clap
CC = c++
CFLAGS = -Wall -Wextra -Werror -std=c++98
RM = rm -rf

all: ${NAME}

${NAME}: ${OBJS}
	@${CC} ${CFLAGS} ${OBJS} -o ${NAME}

%.o: %.cpp
	@${CC} ${CFLAGS} -c -I . $< -o $@

clean:
	@${RM} ${OBJS}

fclean: clean
	@${RM} ${NAME}

re: fclean all

.PHONY: all clean fclean re