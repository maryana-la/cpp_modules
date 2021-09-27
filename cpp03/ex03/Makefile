
NAME	=	FragTrap

COMP	=	g++ -Wall -Wextra -Werror -Wshadow -shadow -g -std=c++98

SRC		=	main.cpp ClapTrap.cpp FragTrap.cpp ScavTrap.cpp DiamondTrap.cpp

OBJ		=	$(SRC:.cpp=.o)

%.o:		%.cpp
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