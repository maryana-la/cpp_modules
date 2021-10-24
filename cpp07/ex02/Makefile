
NAME	=	template

COMP	=	clang++ -std=c++98 -g -Wall -Wextra -Werror  -pedantic

SRC		=	main.cpp

HEADER	=	Array.hpp

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


#➜  ex02 git:(master) ✗ ./template
#String array content :
#list[0] = test
#list[1] = plop
#
#Copy list :
#Change list[0] to "murp"
#Listcopy[0] = test
#List[0] = murp
#
#Int array content :
#j0 = 0
#j1 = 0
#j2 = 0
#j3 = 0
#j4 = 0
#
#Int array content :
#intassign[0] = 0
#intassign[1] = 0
#intassign[2] = 0
#intassign[3] = 0
#intassign[4] = 0
#
#Modify value (previous + 1):
#intassign[0] = 0
#intassign[1] = 1
#intassign[2] = 2
#intassign[3] = 3
#intassign[4] = 4
#
#See out of the bound :
#libc++abi.dylib: terminating with uncaught exception of type Array<int>::ArrayAccess: Out of bounds. (Out of the array)
#jx = [1]    65771 abort      ./template
#
#************** MINE:
#String array content :
#list[0] = test
#list[1] = plop
#
#Copy list :
#Change list[0] to "murp"
#Listcopy[0] = test
#List[0] = murp
#
#Int array content :
#j0 = 0
#j1 = -1879048192
#j2 = 0
#j3 = -1879048192
#j4 = -65534
#
#Int array content :
#intassign[0] = 0
#intassign[1] = -1879048192
#intassign[2] = 0
#intassign[3] = -1879048192
#intassign[4] = -65534
#
#Modify value (previous + 1):
#intassign[0] = 0
#intassign[1] = 1
#intassign[2] = 2
#intassign[3] = 3
#intassign[4] = 4
#
#See out of the bound :
#libc++abi.dylib: terminating with uncaught exception of type Array<int>::AccessError: Requested element is out of the limits
#jx = [1]    67951 abort      ./template
