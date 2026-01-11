NAME = Harl 

CC = c++

CFLAGS = -Wall -Wextra -Werror -std=c++98

SRC = *.cpp

HDR = *.hpp

OBJ = ${SRC:.cpp=.o}

all: ${NAME}

${NAME}: ${SRC} $(HDR)
	${CC} ${CFLAGS} ${SRC} -o ${NAME}

clean:
	rm -f ${OBJ}

fclean: clean
	rm -f ${NAME}

re: fclean all
