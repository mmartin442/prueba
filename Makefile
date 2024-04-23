NAME = program

CC = gcc
CFLAGS = -Wall -Wextra -Werror

all: $(NAME)

clean:
	rm -f $(OBJS)

fclean: clean
    rm -f $(NAME)

re: fclean all


no_warnings:
	$(CC) -o $(NAME) $(SRCS)

bonus:

.PHONY: all clean fclean re no_warnings bonus
