
NAME	=	phonebook

COMP	=	clang++ -Wall -Wextra -Werror -std=c++98

SRC		=	Contact_class.cpp Phonebook_class.cpp main.cpp

OBJ		=	$(SRC:.cpp=.o)

HEADER =	Contact_class.hpp Phonebook_class.hpp

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
