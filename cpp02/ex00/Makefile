
NAME	=	a.out

COMP	=	clang++ -Wall -Wextra -Werror -g -std=c++98

SRC		=	main.cpp Fixed.cpp

OBJ		=	$(SRC:.cpp=.o)

HEADER	=	Fixed.hpp

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