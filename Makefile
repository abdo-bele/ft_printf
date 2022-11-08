NAME = libftprintf.a

SRC = ft_putchar.c ft_putstr.c ft_putnbr.c ft_printf.c

SRCB = 

OBJ = $(SRC:%.c=%.o)

OBJB = $(SRCB:%.c=%.o)

CFALGS =  -Wall -Wextra -Werror

CC = cc

INCLUDE = libft.h

all: $(NAME)

$(NAME): $(OBJ)
	@ar rc $(NAME) $(OBJ)

%.o : %.c $(INCLUDE)
	@$(CC) $(CFALGS) -c $< -o $@

bonus: $(OBJB)
	@ar rc $(NAME) $(OBJB)

clean:
	@rm -rf $(OBJ) $(OBJB)

fclean: clean
	@rm -rf $(NAME)

re: fclean all