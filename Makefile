NAME = libft.a

CFLAGS = -Wall -Wextra -Werror

CC = gcc

SOURCES = 	ft_atoi.c		\
			ft_bzero.c		\
			ft_isalnum.c 	\
			ft_isalpha.c 	\
			ft_isascii.c	\
			ft_isdigit.c	\
			ft_isprint.c	\
			ft_itoa.c		\
			ft_memchr.c		\
			ft_memcmp.c		\
			ft_memcpy.c		\
			ft_memset.c		\
			ft_putendl_fd.c	\
			ft_putnbr_fd.c	\
			ft_putstr_fd.c	\
			ft_split.c		\
			ft_strchr.c		\
			ft_strjoin.c	\
			ft_strlen.c		\
			ft_strncmp.c	\
			ft_strnstr.c	\
			ft_strrchr.c	\
			ft_strtrim.c	\
			ft_substr.c		\
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