SRC = contact.cpp phoneBook.cpp main.cpp
NAME = phoneBook
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