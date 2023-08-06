NAME		=	libft.a

CC			=	cc
CFLAGS		=	-Wall -Wextra -Werror

CONVERSION	=	ft_atoi.c ft_itoa.c ft_tolower.c ft_toupper.c
IO			=	ft_putchar.c ft_putchar_fd.c ft_putendl_fd.c ft_putnbr_fd.c ft_putstr_fd.c
LISTS		=	ft_lstadd_back.c ft_lstadd_front.c ft_lstclear.c ft_lstdelone.c \
				ft_lstiter.c ft_lstlast.c ft_lstmap.c ft_lstnew.c ft_lstsize.c
MEMORY		=	ft_calloc.c
STRING		=	ft_bzero.c ft_memchr.c ft_memcmp.c ft_memcpy.c ft_memmove.c ft_memset.c \
				ft_split.c ft_strchr.c ft_strrchr.c ft_strcmp.c ft_strncmp.c ft_strdup.c \
				ft_striteri.c ft_strjoin.c ft_strlcat.c ft_strlcpy.c ft_strlen.c ft_strmapi.c \
				ft_strnstr.c  ft_strtrim.c ft_substr.c
TYPE		=	 ft_isalnum.c ft_isalpha.c ft_isascii.c ft_isdigit.c ft_isprint.c

GETLINE		=	get_next_line.c
PRINTF		=	ft_printf.c ft_printf_p.c ft_printf_x.c \
				ft_printf_s.c  ft_print_xbig.c  ft_strcreate.c \
				ft_printf_i.c  ft_printf_u.c

CONVERSION	:=	$(addprefix conversion/, $(CONVERSION))
IO			:=	$(addprefix io/, $(IO))
LISTS		:=	$(addprefix lists/, $(LISTS))
MEMORY		:=	$(addprefix memory/, $(MEMORY))
STRING		:=	$(addprefix string/, $(STRING))
TYPE		:=	$(addprefix type/, $(TYPE))
PRINTF		:=	$(addprefix printf/, $(PRINTF))

SOURCE		=	$(CONVERSION) $(IO) $(LISTS) $(MEMORY) $(STRING) $(TYPE) $(GETLINE) $(PRINTF)

SRC_DIR		=	./src/
SRC			=	$(addprefix $(SRC_DIR), $(SOURCE))

INC_DIR		=	./inc/
INC			=	libft.h ft_printf.h

OBJ_DIR		=	./obj/
OBJ			=	$(addprefix $(OBJ_DIR), $(SOURCE:.c=.o))

all:	$(NAME)

$(NAME): $(OBJ)
		ar rc $(NAME) $(OBJ)

$(OBJ_DIR)%.o : $(SRC_DIR)%.c
			@mkdir -p $(@D)
			$(CC) -c $< -o $@ -I $(INC_DIR)

clean:
			rm -rf $(OBJ_DIR)
			rm -f libft.h.gch

fclean: clean
			rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
