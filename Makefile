# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jpollore <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/02/19 13:59:03 by jpollore          #+#    #+#              #
#    Updated: 2018/03/04 09:34:38 by jpollore         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = gcc
NAME = libft.a
HEADER = includes/
TS_NAME = check.out
TEST_HEADER = $$HOME/.brew/include/
TEST_LIBRARY = $$HOME/.brew/lib/
TEST = tests/
SRC = srcs/
CS = ft_strlen.c ft_strdup.c ft_strcpy.c ft_strncpy.c ft_strcat.c ft_strncat.c
CS += ft_strlcat.c ft_strcmp.c ft_strncmp.c ft_atoi.c ft_strstr.c ft_memset.c
CS += ft_bzero.c ft_memcpy.c ft_memccpy.c ft_memmove.c ft_memchr.c ft_memcmp.c
CS += ft_strdup.c ft_strchr.c ft_strrchr.c ft_strnstr.c ft_isalpha.c
CS += ft_isdigit.c ft_isalnum.c ft_isascii.c ft_isprint.c ft_toupper.c
CS += ft_tolower.c ft_memalloc.c ft_memdel.c ft_strnew.c ft_strdel.c
CS += ft_strclr.c ft_striter.c ft_striteri.c ft_strmap.c ft_strmapi.c
CS += ft_strequ.c ft_strnequ.c ft_strsub.c ft_strjoin.c ft_strtrim.c
CS += ft_putchar.c ft_putchar_fd.c ft_putstr.c ft_putstr_fd.c
CS += ft_putendl.c ft_putendl_fd.c ft_putnbr.c ft_putnbr_fd.c
CS += ft_strsplit.c ft_itoa.c ft_lstnew.c
CS += ft_lstdelone.c ft_lstdel.c ft_lstadd.c ft_lstiter.c
CS += ft_lstmap.c ft_getstrupper.c ft_lstfilter.c ft_strrev.c
CS += ft_issort.c ft_sort_wordtab.c ft_strstartswith.c
CS += ft_strendswith.c ft_strswapcase.c
TS = libft.check
OBJS = $(patsubst %.c, %.o, $(CS))
SRCS = $(addprefix $(SRC), $(CS))
TEST_CHECK = $(addprefix $(TEST), $(TS))
TEST_SRC = $(addsuffix .c, $(TEST_CHECK))
CFLAGS = -Wall -Wextra -Werror
OPTION1 = -I$(HEADER)
OPTION2 = $(OPTION1) -I$(TEST_HEADER) -L$(TEST_LIBRARY) -lcheck $(NAME)

all: $(NAME)

$(NAME):
	$(CC) $(CFLAGS) $(OPTION1) -c $(SRCS)
	ar rcs $(NAME) $(OBJS)

clean:
	/bin/rm -f $(OBJS)

fclean: clean
	/bin/rm -rf $(NAME)

re: fclean all

make_test: clean_test $(NAME)
	checkmk $(TEST_CHECK) > $(TEST_SRC)
	gcc $(CFLAGS) $(OPTION2) $(TEST_SRC) -o $(TS_NAME)

run_test: make_test
	./$(TS_NAME); /bin/rm -f $(TS_NAME); /bin/rm -f $(TEST_SRC)

clean_test:
	/bin/rm -f $(TEST_SRC)
	/bin/rm -f $(TS_NAME)
