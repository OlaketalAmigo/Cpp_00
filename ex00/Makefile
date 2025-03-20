NAME = megaphone

SRCS = main.cpp

OBJECTS = $(SRCS:%.cpp=$(OBJECTS_DIR)%.o)

OBJECTS_DIR = OBJS/

CC = c++
CFLAGS = -Wall -Wextra -Werror -g3 -std=c++98

all: $(NAME)

$(NAME): $(OBJECTS)
	$(CC) $(CFLAGS) $(OBJECTS) -o $(NAME)

$(OBJECTS_DIR)%.o: %.cpp
	mkdir -p $(OBJECTS_DIR)
	@$(CC) $(CFLAGS) -c $< -o $@

clean:
	@rm -rf $(OBJECTS_DIR)

fclean: clean
	@rm -f $(NAME) $(OBJECTS_DIR)
	@clear

re: fclean all

.PHONY: all bonus clean fclean re
