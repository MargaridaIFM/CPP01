NAME = zombieHorde

CC = c++
CFLAGS = -std=c++98 -Wall -Wextra -Werror -g

SRC = main.cpp Zombie.cpp zombieHorde.cpp
OBJ = $(SRC:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJ)
	@echo "$(BBLUE)Creating Zombie Horde...$(NC)"
	@$(CC) $(CFLAGS) $(OBJ) -o $(NAME)

%.o: %.cpp
	@$(CC) $(CFLAGS) -c $< -o $@

clean:
	@echo "$(RED)Removing object files..$(NC)"
	@rm -f $(OBJ)

fclean: clean
	@echo "$(RED)Removing Zombie Horde..$(NC)"
	@rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re