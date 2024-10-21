CC = cc
GFLAGS = -Werror -Wall -Wextra -fsanitize=address
AR = ar rcs
NAME = libftprintf.a
LIBFT = lib/libft.a

SRCS = $(wildcard *.c)
SRCS_OBJS = $(SRCS:.c=.o)

all: $(NAME)

$(NAME): $(SRCS_OBJS)
	$(AR) lib/$(NAME) $(SRCS_OBJS) $(LIBFT)

clean:
	rm -f *.o

fclean: clean
	rm -f lib/$(NAME)
