NAME = BraiiiiiiinnnzzzZ

CC = c++

FLAGS = -Wall -Wextra -Werror -std=c++98

SRC = main.cpp Zombie.cpp newZombie.cpp randomChump.cpp

HDR = *.hpp

all : $(NAME)

$(NAME) : $(SRC) $(HDR)
	$(CC) $(FLAGS) $(SRC) -o $(NAME)

fclean :
	rm -f $(NAME)

re : fclean all

