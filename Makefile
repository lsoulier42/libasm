SRCS = ft_strlen.s ft_strcpy.s ft_strcmp.s ft_write.s ft_read.s ft_strdup.s
OBJS= $(SRCS:.s=.o)
AS = nasm
ASFLAGS= -felf64
NAME= libasm.a

$(NAME): $(OBJS)
	ar -rcs $(NAME) $(OBJS)
all: $(NAME)
clean:
	rm -f $(OBJS)
fclean: clean
	rm -f $(NAME)
re: fclean all
.PHONY: all clean fclean re
