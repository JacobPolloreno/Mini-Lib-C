# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jpollore <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/02/19 13:59:03 by jpollore          #+#    #+#              #
#    Updated: 2018/02/24 10:20:37 by jpollore         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = gcc
NAME = libft.a
HEADER = includes/
TS_NAME = check.out
TEST_HEADER = /nfs/2018/j/jpollore/.brew/include/
TEST_LIBRARY = /nfs/2018/j/jpollore/.brew/lib/
TEST = tests/
SRC = srcs/
CS = ft_strlen.c ft_strdup.c ft_strcpy.c ft_strncpy.c ft_strcat.c ft_strncat.c
CS += ft_strlcat.c ft_strcmp.c ft_strncmp.c ft_atoi.c ft_strstr.c ft_memset.c
CS += ft_bzero.c ft_memcpy.c ft_memccpy.c ft_memmove.c ft_memchr.c ft_memcmp.c
CS += ft_strdup.c ft_strchr.c ft_strrchr.c ft_strnstr.c ft_isalpha.c
CS += ft_isdigit.c ft_isalnum.c ft_isascii.c ft_isprint.c ft_toupper.c
CS += ft_tolower.c
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
	./$(TS_NAME)

clean_test:
	/bin/rm -f $(TEST_SRC)
	/bin/rm -f $(TS_NAME)
