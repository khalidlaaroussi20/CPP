SRC = *.cpp
NAME = Forms
RM = rm -f
CFLAGS =  -Wall -Wextra -Werror


all : $(NAME)

$(NAME) : $(SRC)
	c++ $(CFLAGS) $(SRC) -o $(NAME)

clean :
	$(RM) $(NAME)
	
fclean : clean

re: fclean all
	
.PHONY : all clean fclean re