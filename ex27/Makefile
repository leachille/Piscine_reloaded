NAME = libft.a

SRCS = .c

OBJ = ft_putchar.o ft_putstr.o ft_strcmp.o ft_strlen.o ft_swap.o

HEADERS = includes

all : $(NAME)

$(NAME) :
		gcc -I $(HEADERS) -c $(SRCS)
		ar rc $(NAME) $(OBJ)
		ranlib $(NAME)

clean :
		/bin/rm -f $(OBJ)

fclean : clean
		/bin/rm -f $(NAME)

re : fclean all
