NAME = army

SRCS = main.cpp HumanB.cpp HumanA.cpp Weapon.cpp
OBJ 	=	$(SRCS:.cpp=.o)
CC = clang++

CFLAGS  = -Wall -Wextra -Werror
all:	$(NAME)

$(NAME):	$(OBJ) HumanB.hpp HumanA.hpp Weapon.hpp
	$(CC) $(CFLAGS) $(OBJ) -o $(NAME)

.cpp.o:
	$(CC) $(CFLAGS) -c $< -o $(<:.cpp=.o)

clean:
	rm -rf $(OBJ)

fclean:	clean
	rm -rf $(NAME)

re:	fclean $(NAME)

.PHONY:	all clean fclean re
