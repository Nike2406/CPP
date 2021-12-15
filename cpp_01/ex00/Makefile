NAME = zombie

CC = g++
FL = -Wall -Wextra -Werror

SRCS =	main.cpp Zombie.cpp newZombie.cpp randomChump.cpp
HEADERS = Zombie.hpp

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