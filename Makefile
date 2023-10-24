NAME = libft.a

CFLAGS = -Wall -Wextra -Werror

CC = gcc

SOURCES = 	ft_atoi.c		\
			ft_isalnum.c 	\
			ft_isalpha.c 	\
			ft_isascii.c	\
			ft_isdigit.c	\
			ft_isprint.c	\
			ft_strchr.c		\
			ft_strrchr.c	\
			ft_strlen.c		\
			ft_tolower.c	\
			ft_toupper.c	\

OBJS = $(SOURCES:.c=.o)

all: $(NAME)

$(NAME): $(OBJS)
	ar rcs $(NAME) $(OBJS)

re: fclean all

clean:
	rm -rf $(OBJS) 

fclean: clean
	rm -rf $(NAME)
			
.PHONY: all re clean fclean