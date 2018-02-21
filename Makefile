# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jpollore <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/02/19 13:59:03 by jpollore          #+#    #+#              #
#    Updated: 2018/02/21 11:19:40 by jpollore         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = gcc
NAME = libft.a
HEADER = includes/
TEST = tests/
SRC = srcs/
CS = ft_strlen.c ft_strdup.c ft_strcpy.c ft_strncpy.c ft_strcat.c ft_strncat.c
CS += ft_strlcat.c ft_strcmp.c ft_strncmp.c ft_atoi.c ft_strstr.c ft_memset.c
CS += ft_bzero.c ft_memcpy.c ft_memccpy.c
TS = strcmp.check memset.check bzero.check memcpy.check memccpy.check
OBJS = $(patsubst %.c, %.o, $(CS))
SRCS = $(addprefix $(SRC), $(CS))
TEST_OBJS = $(addprefix $(TEST), $(addsuffix .o, $(TS)))
TEST_DEBUGS = $(addsuffix .dSYM, $(TEST_OBJS))
TEST_SRCS = $(addprefix $(TEST), $(addsuffix .c, $(TS)))
CFLAGS = -Wall -Wextra -Werror -I$(HEADER)

all: $(NAME)

$(NAME):
	$(CC) $(CFLAGS) -c $(SRCS)
	ar rc $(NAME) $(OBJS)
	ranlib $(NAME)

clean:
	/bin/rm -f $(OBJS)

fclean: clean
	/bin/rm -rf $(NAME)

re: fclean all

run_test: clean_test $(NAME)
	./make_test.sh
	./run_test.sh

clean_test:
	/bin/rm -f $(TEST_SRCS)
	/bin/rm -f $(TEST_OBJS)
	/bin/rm -rf $(TEST_DEBUGS)
