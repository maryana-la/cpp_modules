
NAME	=	karen

COMP	=	clang++ -Wall -Wextra -Werror -g -std=c++98

SRC		=	main.cpp Karen.cpp

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