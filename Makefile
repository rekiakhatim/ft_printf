
NAME = libftprintf.a

CC = cc

CFLAGS = -Wall -Wextra -Werror

SRC = ft_printf.c\
 	ft_printf_fncts.c\
	ft_print_unsigned.c\
	itoa.c\
	ft_print_hex.c \
	ft_print_add.c \

	
	
OBJ = ${SRC:.c=.o}

all: $(NAME)

$(NAME):$(OBJ)
		ar rcs $@ $^

%.o : %.c
		cc ${CFLAGS} -o $@ -c $^

clean :
		rm -f $(OBJ)

fclean: clean
		rm -f $(NAME)

re: fclean all

