NAME		=	libftprintf.a

CC			=	cc
CFLAGS		=	-Wall -Wextra -Werror

SOURCE		=	ft_printf.c ft_printf_p.c ft_printf_x.c ft_putstr.c \
				ft_printf_s.c  ft_print_xbig.c  ft_strcreate.c \
				ft_printf_i.c  ft_printf_u.c  ft_putchar.c
SRC_DIR		=	./src/
SRC			:=	$(addprefix $(SRC_DIR), $(SOURCE))

OBJ_DIR		=	./obj/
OBJ			=	$(addprefix $(OBJ_DIR), $(SOURCE:.c=.o))

INC_DIR		=	./inc/
INC			=	ft_printf.h

all:	$(NAME)

$(NAME): $(OBJ)
			ar rc $(NAME) $(OBJ)

$(OBJ): $(SRC)
			@mkdir -p $(@D)
			$(CC) -c $< -o $@ -I $(INC_DIR)

clean:
			rm -rf $(OBJ_DIR)
			rm -f ft_printf.h.gch

fclean: clean
			rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
