# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jpollore <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/02/19 13:59:03 by jpollore          #+#    #+#              #
#    Updated: 2018/05/31 14:11:39 by jpollore         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

ifeq ($(USE_CLANG), 1)
	CC = clang
else
	CC = gcc
endif
NAME = libft.a
HEADER = includes/
SRC = srcs
PRINTF_SRC = $(SRC)/ft_printf

# LIBC
LIBC_CS = ft_strlen.c ft_strdup.c ft_strcpy.c ft_strncpy.c ft_strcat.c ft_strncat.c
LIBC_CS += ft_strlcat.c ft_strcmp.c ft_strncmp.c ft_atoi.c ft_strstr.c ft_memset.c
LIBC_CS += ft_bzero.c ft_memcpy.c ft_memccpy.c ft_memmove.c ft_memchr.c ft_memcmp.c
LIBC_CS += ft_strdup.c ft_strchr.c ft_strrchr.c ft_strnstr.c ft_isalpha.c
LIBC_CS += ft_isdigit.c ft_isalnum.c ft_isascii.c ft_isprint.c ft_toupper.c
LIBC_CS += ft_tolower.c ft_memalloc.c ft_memdel.c ft_strnew.c ft_strdel.c
LIBC_CS += ft_strclr.c ft_striter.c ft_striteri.c ft_strmap.c ft_strmapi.c
LIBC_CS += ft_strequ.c ft_strnequ.c ft_strsub.c ft_strjoin.c ft_strtrim.c
LIBC_CS += ft_putchar.c ft_putchar_fd.c ft_putstr.c ft_putstr_fd.c
LIBC_CS += ft_putendl.c ft_putendl_fd.c ft_putnbr.c ft_putnbr_fd.c
LIBC_CS += ft_strsplit.c ft_itoa.c ft_lstnew.c
LIBC_CS += ft_lstdelone.c ft_lstdel.c ft_lstadd.c ft_lstiter.c
LIBC_CS += ft_lstmap.c ft_getstrupper.c ft_lstfilter.c ft_strrev.c
LIBC_CS += ft_issort.c ft_sort_wordtab.c ft_strstartswith.c
LIBC_CS += ft_strendswith.c ft_strswapcase.c ft_strcre.c
LIBC_CS += ft_putstrs.c ft_putstrs_fd.c ft_strexpand.c
LIBC_CS += ft_createfile.c ft_deletefile.c fdsearchcmp.c fdcmp.c
LIBC_CS += btree_apply_infix.c btree_apply_prefix.c btree_apply_suffix.c
LIBC_CS += btree_create_node.c btree_insert_node.c btree_level_count.c
LIBC_CS += btree_search_item.c btree_update_node.c btree_minvalue_node.c
LIBC_CS += btree_remove_node.c btree_deletefd.c btree_updatefd.c
LIBC_CS += btree_remove_fdnode.c get_next_line.c stack_isempty.c
LIBC_CS += stack_print.c stack_push.c stack_iter.c stack_pop.c
LIBC_CS += queue_isempty.c queue_iter.c queue_print.c enqueue.c
LIBC_CS += dequeue.c ft_strchri.c ft_powl.c ft_itoa_base.c
LIBC_CS += ft_strtolower.c ft_strtoupper.c ft_printbits.c
LIBC_CS += ft_printbits_fd.c ft_putwchar.c ft_putwchar_fd.c
LIBC_CS += ft_putwstr.c ft_putwstr_fd.c ft_getwchar.c ft_wstrnew.c
LIBC_CS += ft_uitoa.c ft_uitoa_base.c ft_powul.c ft_powi.c
LIBC_CS += ft_powd.c ft_strjoindel.c ft_strsubdel.c ft_wstrlen.c
LIBC_CS += ft_wstrdup.c ft_wstrdel.c ft_wstr_to_str.c
LIBC_CS += ft_wstr_to_str.c ft_ltoa_base.c ft_ultoa_base.c
LIBC_CS += ft_strsdel.c ft_iarriter.c ft_iarrmap.c ft_iarrappend.c
LIBC_CS += ft_arriter.c ft_tarriter.c ft_tarrmap.c
LIBC_CS += ft_tarrappend.c ft_tarrhas.c ft_ituplecmp.c ft_ituple.c
LIBC_CS += argmin.c
LIBC_OBJS = $(patsubst %.c, %.o, $(CS))
LIBC_SRCS = $(addprefix $(SRC)/, $(LIBC_CS))

# Printf
PRINTF_CS = ft_printf.c print_nums.c print_misc.c length_modifiers.c
PRINTF_CS += flags_char_field.c flags_width_prec.c aliases_nums.c aliases_misc.c
PRINTF_CS += print_modifiers.c conv_nums.c conv_misc.c ft_printf_fd.c
PRINTF_OBJS = $(patsubst %.c, %.o, $(PRINTF_CS))
PRINTF_SRCS = $(addprefix $(PRINTF_SRC)/, $(PRINTF_CS))

OBJS = $(LIBC_OBJS) $(PRINTF_OBJS)
CS = $(LIBC_CS) $(PRINTF_CS)
SRCS = $(LIBC_SRCS) $(PRINTF_SRCS)

# TEST FRAMEWORK
TS_NAME = check.out
TEST_HEADER = $$HOME/.brew/include/
TEST_LIBRARY = $$HOME/.brew/lib/
TEST = tests
TS = $(patsubst %.a, %.check, $(NAME))
TEST_CHECK = $(addprefix $(TEST)/, $(TS))
TEST_SRC = $(addsuffix .c, $(TEST_CHECK))
TEST_FLAGS = $(LIBOPT) -I$(TEST_HEADER) -L$(TEST_LIBRARY) -lcheck -L. -lft

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
	$(CC) $(CFLAGS) $(OPTION2) $(TEST_SRC) -o $(TS_NAME)

run_test: make_test
	./$(TS_NAME); make clean_test

clean_test:
	/bin/rm -f $(TEST_SRC)
	/bin/rm -f $(TS_NAME)
	/bin/rm -rf $(TS_NAME).dSYM

single_test: $(TEST)/single.c
	$(CC) $(CFLAGS) $(OPTION1) $(TEST)/single.c -o single.test -L. -lft
	./single.test
