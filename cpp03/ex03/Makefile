
NAME	=	DiamondTrap

COMP	=	clang++ -Wall -Wextra -Werror -Wshadow -Wno-shadow -g -std=c++98

SRC		=	main.cpp ClapTrap.cpp FragTrap.cpp ScavTrap.cpp DiamondTrap.cpp

OBJ		=	$(SRC:.cpp=.o)

HEADER =	ClapTrap.hpp FragTrap.hpp ScavTrap.hpp DiamondTrap.hpp

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