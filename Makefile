SRCS := ft_printf.c\
		utils.c\
		conversion_a.c\
		conversion_b.c
		
NAME := libftprintf.a
LIBFT := libft/libft.a
HEADER := ft_printf.h
OBJS := $(SRCS:%.c=%.o)
CFLAGS := -Wall -Wextra -Werror -I./libft/

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