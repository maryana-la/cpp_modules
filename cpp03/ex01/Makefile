
NAME	=	ScavTrap

COMP	=	clang++ -Wall -Wextra -Werror -g -std=c++98

SRC		=	main.cpp ClapTrap.cpp ScavTrap.cpp

OBJ		=	$(SRC:.cpp=.o)

HEADER =	ScavTrap.hpp ClapTrap.hpp

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