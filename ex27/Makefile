NAME = libft.a

FCT = ft_putchar.c ft_putstr.c

SRCS = ft_display_file.c ft_putchar.c ft_putstr.c

OBJ = ft_display_file.o ft_putchar.o ft_putstr.o

HEADERS = -Wall -Werror -Wextra

all : compil

compil :
		gcc $(HEADERS) -c $(SRCS)
		ar rc $(NAME) $(OBJ)
		ranlib $(NAME)
		gcc $(HEADERS) $(NAME)

clean :
		/bin/rm -f $(OBJ)

fclean : clean
		/bin/rm -f $(NAME) a.out

re : fclean all
