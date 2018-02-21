# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jpollore <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/02/19 13:59:03 by jpollore          #+#    #+#              #
#    Updated: 2018/02/20 15:53:30 by jpollore         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = gcc
NAME = libft.a
HEADER = includes/
TEST = tests/
SRC = srcs/
CS = ft_strlen.c ft_strdup.c ft_strcpy.c ft_strncpy.c ft_strcat.c ft_strncat.c
CS += ft_strlcat.c ft_strcmp.c ft_strncmp.c ft_atoi.c ft_strstr.c
TS = strcmp.check
OBJS = $(patsubst %.c, %.o, $(CS))
SRCS = $(addprefix $(SRC), $(CS))
TEST_OBJS = $(addprefix $(TEST), $(addsuffix .o, $(TS)))
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

make_test: $(NAME)
	./make_test.sh

clean_test:
	/bin/rm -f $(TEST_OBJS) $(TEST_SRCS)

run_test:
	./run_test.sh

re_test: clean_test make_test
