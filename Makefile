NAME := libftprintf.a
LIBFT := libft/libft.a
HEADER := ft_printf.h
SRCS := $(wildcard *.c)
OBJS := $(SRCS:%.c=%.o)
CFLAGS := -Wall -Wextra -Werror

all: $(NAME)

$(NAME): $(LIBFT) $(OBJS)
	cp $< $@
	ar rcs $@ $(OBJS)

$(LIBFT):
	make -C libft/

%.o: %.c $(HEADER)
	cc $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJS)
	make -C libft/ clean

fclean: clean
	rm -f $(NAME)
	make -C libft/ fclean

re: fclean all

.PHONY: all clean fclean re