
NAME	=	violence

COMP	=	clang++ -Wall -Wextra -Werror -std=c++98

SRC		=	main.cpp HumanA.cpp HumanB.cpp Weapon.cpp

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
