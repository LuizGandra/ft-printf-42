NAME := libftprintf.a
CFLAGS := -Wall -Werror -Wextra
ARFLAGS := -rcs
RM := rm -rf
BONUS_DIR := bonus
HEADERS := ft_printf.h
BONUS_HEADERS := $(BONUS_DIR)/ft_printf.h
SOURCES := \
	ft_printf.c utils.c ft_putaddress.c ft_puthex.c \
	ft_putchar.c ft_putnbr.c ft_putstr.c
OBJECTS := $(SOURCES:.c=.o)
BONUS_SOURCES := \
	ft_printf_bonus.c utils_bonus.c ft_putaddress_bonus.c ft_puthex_bonus.c \
	ft_putchar_bonus.c ft_putnbr_bonus.c ft_putstr_bonus.c
BONUS_OBJECTS := $(addprefix $(BONUS_DIR)/, $(BONUS_SOURCES:.c=.o))

all: $(NAME)

$(NAME): $(OBJECTS)

%.o: %.c $(HEADERS)
	$(CC) $(CFLAGS) -c $< -o $@
	$(AR) $(ARFLAGS) $(NAME) $@

bonus: $(BONUS_OBJECTS)

$(BONUS_DIR)/%.o: $(BONUS_DIR)/%.c $(BONUS_HEADERS)
	$(CC) $(CFLAGS) -c $< -o $@
	$(AR) $(ARFLAGS) $(NAME) $@

clean:
	$(RM) $(OBJECTS) $(BONUS_OBJECTS)

fclean: clean
	$(RM) $(NAME)

re: fclean all

norm:
	norminette -R CheckForbiddenSourceHeader

.PHONY: all bonus clean fclean re norm