CC = c++
CFLAGS = -Wall -Wextra -Werror
CFLAGS += -std=c++98
NAME = phonebook
SRCS = main.cpp PhoneBook.cpp utils.cpp
OBJS = $(SRCS:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJS)
	$(CC) $(CFLAGS) -o $(NAME) $(OBJS)

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
