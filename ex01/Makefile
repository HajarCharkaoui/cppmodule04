NAME = a.out

CC = c++

CPPFLAGS = -Wall -Wextra -Werror -std=c++98

SRC = main.cpp Animal.cpp Cat.cpp Dog.cpp WrongAnimal.cpp WrongCat.cpp Brain.cpp

OBJ = $(SRC:.cpp=.o)

all: $(NAME)


$(NAME): $(OBJ)
	@ $(CC) $(CPPFLAGS) $(OBJ) -o $(NAME)


%.o: %.cpp Animal.h Cat.h Dog.h WrongAnimal.h WrongCat.h Brain.h
	@ $(CC) $(CPPFLAGS) -c $< -o $@

clean:
	@ rm -rf $(OBJ)

fclean: clean
	@ rm -rf $(NAME)

re: fclean all

.PHONY: all fclaen clean re