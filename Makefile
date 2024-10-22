CC = cc
GFLAGS = -Werror -Wall -Wextra
AR = ar
NAME = libftprintf.a
LIBFT_NAME= libft.a
LIBFT = ft_calloc.o \
		ft_bzero.o \
		ft_memset.o \
		ft_strlen.o \
		ft_isset.o \
		ft_lstadd_back.o \
		ft_substr.o \
		ft_putstr_fd.o \
		ft_putchar_fd.o \
		ft_toupper.o \
		ft_lstnew.o \
		ft_lstdelone.o \
		ft_lstclear.o \
		ft_strncmp.o \
		ft_strlcpy.o \
		ft_strdup.o \
		ft_lstlast.o \

SRCS = $(wildcard *.c)
SRCS_OBJS = $(SRCS:.c=.o)

all: $(NAME)

$(NAME): $(SRCS_OBJS)
	$(AR) x $(LIBFT_NAME) $(LIBFT)
	$(AR) rcs $(NAME) $(SRCS_OBJS) $(LIBFT)

clean:
	rm -f *.o
	rm -f test

fclean: clean
	rm -f lib/$(NAME)
