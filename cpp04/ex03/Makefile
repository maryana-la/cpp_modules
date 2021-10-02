
NAME	=	materia

COMP	=	clang++ -Wall -Wextra -Werror -g -std=c++98

SRC		=	AMateria.cpp Cure.cpp MateriaSource.cpp Character.cpp Ice.cpp main.cpp

HEADER	=	AMateria.hpp ICharacter.hpp MateriaSource.hpp \
			Character.hpp IMateriaSource.hpp Cure.hpp Ice.hpp

OBJ		=	$(SRC:.cpp=.o)

%.o:		%.cpp $(HEADER)
		$(COMP) -c -o $@ $<

all:	$(NAME)

$(NAME): $(OBJ)
	$(COMP) $(OBJ) -o$(NAME)

clean:
	rm -rf $(OBJ)

fclean:	clean
	rm -rf $(NAME)

re:	fclean all

.PHONY: clean fclean re all
