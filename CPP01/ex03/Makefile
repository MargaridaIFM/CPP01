NAME = violence

CC = c++
CFLAGS = -std=c++98 -Wall -Wextra -Werror

SRC = main.cpp HumanA.cpp HumanB.cpp Weapon.cpp
OBJ = $(SRC:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJ)
	@echo "$(BBLUE)Creating uncessary violence...$(NC)"
	@$(CC) $(CFLAGS) $(OBJ) -o $(NAME)

%.o: %.cpp
	@$(CC) $(CFLAGS) -c $< -o $@

clean:
	@echo "$(RED)Removing object files..$(NC)"
	@rm -f $(OBJ)

fclean: clean
	@echo "$(RED)Removing Progam..$(NC)"
	@rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re