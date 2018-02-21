#!/bin/sh

make all
rm tests/*.o
for F in `ls tests/*.check`
do
	checkmk $F > $F.c 
	gcc -Wall -Wextra -Werror -I./includes -I/nfs/2018/j/jpollore/.brew/include -L/nfs/2018/j/jpollore/.brew/lib -lcheck libft.a $F.c -o $F.o
done
