
NAME	=	abstract

COMP	=	clang++ -Wall -Wextra -Werror -std=c++98

SRC		=	main.cpp Animal.cpp Dog.cpp Cat.cpp Brain.cpp

HEADER	=	Colors.hpp Animal.hpp Dog.hpp Cat.hpp Brain.hpp

O_FOLD	=	objs/
OBJ	:=	$(addprefix $(O_FOLD), $(SRC:.cpp=.o))

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
