
NAME	=	materia

COMP	=	clang++ -Wall -Wextra -Werror -g -std=c++98

SRC		=	AMateria.cpp Cure.cpp MateriaSource.cpp Character.cpp Ice.cpp main.cpp

HEADER	=	AMateria.hpp ICharacter.hpp MateriaSource.hpp \
			Character.hpp IMateriaSource.hpp Cure.hpp Ice.hpp

O_FOLD	=	objs/
OBJ	:=	$(addprefix $(O_FOLD), $(SRC:.cpp=.o))

#OBJ		=	$(SRC:.cpp=.o)

$(O_FOLD)%.o:		%.cpp $(HEADER)
		@mkdir -p objs
		$(COMP) -c -o $@ $<

all:	$(NAME)

$(NAME): $(OBJ)
	$(COMP) $(OBJ) -o$(NAME)

clean:
	rm -rf $(OBJ)
	@rm -rf $(O_FOLD)

fclean:	clean
	rm -rf $(NAME)

re:	fclean all

.PHONY: clean fclean re all
