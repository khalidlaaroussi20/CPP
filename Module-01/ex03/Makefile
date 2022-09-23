SRC = Weapon.cpp HumanB.cpp HumanA.cpp main.cpp
NAME = Weapon
RM = rm -f
CFLAGS =  -Wall -Wextra -Werror -std=c++98


all : $(NAME)

$(NAME) : $(SRC)
	c++ $(CFLAGS) $(SRC) -o $(NAME)

clean :
	$(RM) $(NAME)
	
fclean : clean

re: fclean all
	
.PHONY : all clean fclean re