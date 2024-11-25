NAME := libftprintf.a
CFLAGS := -Wall -Werror -Wextra
ARFLAGS := -rcs
RM := rm -rf
HEADERS := ft_printf.h
SOURCES := \
	ft_printf.c utils.c ft_putaddress.c ft_puthex.c \
	ft_putchar.c ft_putnbr.c ft_putstr.c
OBJECTS := $(SOURCES:.c=.o)

all: $(NAME)

$(NAME): $(OBJECTS)
	$(AR) $(ARFLAGS) $(NAME) $(OBJECTS)

%.o: %.c $(HEADERS)
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	$(RM) $(OBJECTS)

fclean: clean
	$(RM) $(NAME)

re: fclean all

norm:
	norminette -R CheckForbiddenSourceHeader

.PHONY: all clean fclean re norm