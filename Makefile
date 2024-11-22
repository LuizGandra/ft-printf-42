NAME := libftprintf.a
LIBFT_PATH := ./libft
LIBFT := $(LIBFT_PATH)/libft.a
CFLAGS := -Wall -Werror -Wextra
ARFLAGS := -rcs
RM := rm -rf
HEADERS := ft_printf.h
OBJS_DIR := objects
SOURCES := ft_printf.c utils.c ft_putaddress_fd.c ft_puthex_fd.c
OBJECTS := $(SOURCES:%.c=$(OBJS_DIR)/%.o)

all: $(NAME)

$(NAME): $(LIBFT) $(OBJS_DIR) $(OBJECTS)
	cp $(LIBFT) $(NAME)
	$(AR) $(ARFLAGS) $(NAME) $(OBJECTS)

$(LIBFT):
	$(MAKE) -C $(LIBFT_PATH) all

$(OBJS_DIR):
	mkdir -p $@

$(OBJS_DIR)/%.o: %.c $(HEADERS)
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	$(RM) $(OBJS_DIR)
	$(MAKE) -C $(LIBFT_PATH) clean

fclean: clean
	$(RM) $(NAME)
	$(MAKE) -C $(LIBFT_PATH) fclean

re: fclean all

norm:
	norminette -R CheckForbiddenSourceHeader

.PHONY: all clean fclean re libft norm