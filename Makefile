# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jpollore <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/02/19 13:59:03 by jpollore          #+#    #+#              #
#    Updated: 2018/04/24 14:48:50 by jpollore         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


ifeq ($(USE_CLANG), 1)
	CC = clang
else
	CC = gcc
endif
NAME = libft.a
HEADER = includes/
TS_NAME = check.out
TEST_HEADER = $$HOME/.brew/include/
TEST_LIBRARY = $$HOME/.brew/lib/
TEST = tests
SRC = srcs
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
CS += ft_strendswith.c ft_strswapcase.c ft_strcre.c
CS += ft_putstrs.c ft_putstrs_fd.c ft_strexpand.c
CS += ft_createfile.c ft_deletefile.c fdsearchcmp.c fdcmp.c
CS += btree_apply_infix.c btree_apply_prefix.c btree_apply_suffix.c
CS += btree_create_node.c btree_insert_node.c btree_level_count.c
CS += btree_search_item.c btree_update_node.c btree_minvalue_node.c
CS += btree_remove_node.c btree_deletefd.c btree_updatefd.c
CS += btree_remove_fdnode.c get_next_line.c stack_isempty.c
CS += stack_print.c stack_push.c stack_iter.c stack_pop.c
CS += queue_isempty.c queue_iter.c queue_print.c enqueue.c
CS += dequeue.c ft_strchri.c ft_powl.c ft_itoa_base.c
CS += ft_strtolower.c ft_strtoupper.c ft_printbits.c
CS += ft_printbits_fd.c ft_putwchar.c ft_putwchar_fd.c
CS += ft_putwstr.c ft_putwstr_fd.c ft_getwchar.c ft_wstrnew.c
CS += ft_uitoa.c ft_uitoa_base.c ft_powul.c ft_powi.c
CS += ft_powd.c ft_strjoindel.c ft_strsubdel.c ft_wstrlen.c
CS += ft_wstrdup.c ft_wstrdel.c ft_wstr_to_str.c
CS += ft_wstr_to_str.c
TS = libft.check
OBJS = $(patsubst %.c, %.o, $(CS))
SRCS = $(addprefix $(SRC)/, $(CS))
TEST_CHECK = $(addprefix $(TEST)/, $(TS))
TEST_SRC = $(addsuffix .c, $(TEST_CHECK))
CFLAGS = -Wall -Wextra -Werror
ifeq ($(CDEBUG), 1)
	CFLAGS += -g
endif
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

re_test: re
	make run_test

make_test: clean_test $(NAME)
	checkmk $(TEST_CHECK) > $(TEST_SRC)
	gcc $(CFLAGS) $(OPTION2) $(TEST_SRC) -o $(TS_NAME)

run_test: make_test
	./$(TS_NAME); make clean_test

clean_test:
	/bin/rm -f $(TEST_SRC)
	/bin/rm -f $(TS_NAME)
	/bin/rm -rf $(TS_NAME).dSYM

single_test: $(TEST)/single.c
	$(CC) $(CFLAGS) $(OPTION1) $(TEST)/single.c -o single.test -L. -lft
	./single.test
