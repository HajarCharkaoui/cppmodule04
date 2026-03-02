NAME = a.out

CC = c++

CPPFLAGS = -Wall -Wextra -Werror -std=c++98

SRC = main.cpp AMateria.cpp Character.cpp Ice.cpp Cure.cpp MateriaSource.cpp

OBJ = $(SRC:.cpp=.o)

all: $(NAME)


$(NAME): $(OBJ)
	@ $(CC) $(CPPFLAGS) $(OBJ) -o $(NAME)


%.o: %.cpp AMateria.h Character.h ICharacter.h Ice.h Cure.h IMateriaSource.h MateriaSource.h
	@ $(CC) $(CPPFLAGS) -c $< -o $@

clean:
	@ rm -rf $(OBJ)

fclean: clean
	@ rm -rf $(NAME)

re: fclean all

.PHONY: all fclaen clean re