
NAME	=	FragTrap

COMP	=	clang++ -Wall -Wextra -Werror -g -std=c++98

SRC		=	main.cpp ClapTrap.cpp FragTrap.cpp

OBJ		=	$(SRC:.cpp=.o)

HEADER =	FragTrap.hpp ClapTrap.hpp

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