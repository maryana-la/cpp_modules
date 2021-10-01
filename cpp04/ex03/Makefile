
NAME	=	abstract

COMP	=	clang++ -Wall -Wextra -Werror -std=c++98

SRC		=	main.cpp Animal.cpp Dog.cpp Cat.cpp Brain.cpp

HEADER	=	Colors.hpp Animal.hpp Dog.hpp Cat.hpp Brain.hpp

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
