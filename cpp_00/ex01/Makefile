NAME = phonebook

CC = g++
FL = -Wall -Wextra -Werror

SRCS =	main.cpp Phonebook.cpp Contact.cpp
HEADERS = Phonebook.hpp Contact.hpp

OBJS = $(SRCS:.cpp=.o)

.cpp.o:
	@$(CC) $(FL) -o $@ -c $^

all: $(NAME)

$(NAME): $(OBJS)
	@$(CC) $(OBJS) -o $(NAME)
	@echo "\033[7;36m         \
	It's done, my Master          \033[0m"

clean:
	@rm -f $(OBJS)

fclean:
	@rm -f $(OBJS)
	@rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re