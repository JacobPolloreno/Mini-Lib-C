# Libft

## Description
This project contains many reimplementations of standard C functions created by Jacob Polloreno. For
learning purposes.

## Getting Started
* Note: tested on Mac OS High Sierra
1. `git clone https://github.com/JacobPolloreno/42LIBFT.git libft`
2. `cd libft`
3. run `make` to compile the library and produce a `libft.a` file
	* create env variable ```export CDEBUG=1``` before compiling to add ```-g``` flag for
	  debugging
4. to make use of the library run `gcc -L. -lft your_c_file.c` while in the `libft/` directory
	* you can move the `libft.a` file into your project repo **but** you must also copy over the `libft.h` header file
	* if you decide to move the library, run `gcc -L<path_to_library> -lft your_c_file.c`
5. Makefile commands:
	* `re`, `clean`, `fclean`, `all`, `make_test`, `clean_test`, and `run_test`

### To Run Unit Test
1. `brew install check` to install the testing framework
2. you may need to change the paths found in the Makefile `TEST_HEADER` and `TEST_LIBRARY` to
   point where your check was installation path
3. `make run_test` will compile the test file in `tests/libft.check` and run the test

* Note: the test framework takes advantage of the `checkmk` awk script to generate the check .c file
* Note 2: Unit test are not comprehensive but provide a stepping stone for test driven development

# Implementations

## Data Structures Supported
 - Linked list (look for _ft\_ls-_ prefix in file names. Both single and double linked list supported.
 - Binary tree (look for _btree-_ prefix in file names.
 - Stack (look for _stack-_ prefix)
 - Queue (look for _queue-_ prefix)
 
## Functions Implemented
| Name | Prototype | Description |
| --- | --- | --- |
| [btree_apply_infix.c](https://github.com/JacobPolloreno/42LIBFT/tree/master/srcs/btree_apply_infix.c) | ```void btree_apply_infix(t_btree *root, void (*applyf)(void *);``` | Apply function to binary tree nodes using infix traversal (go left; apply; go right) |
| [btree_apply_prefix.c](https://github.com/JacobPolloreno/42LIBFT/tree/master/srcs/btree_apply_prefix.c) | ```void btree_apply_prefix(t_btree *root, void (*applyf)(v:oid *);```| Apply function to binary tree nodes using prefix traversal (apply; go left; go right) |
| [btree_apply_suffix.c](https://github.com/JacobPolloreno/42LIBFT/tree/master/srcs/btree_apply_suffix.c) | ```void btree_apply_suffix(t_btree *root, void (*applyf)(void *);```| Apply function to binary tree nodes using suffix traversal (go left; go right; apply) |
| [btree_create_node.c](https://github.com/JacobPolloreno/42LIBFT/tree/master/srcs/btree_create_node.c) | ```t_btree *btree_create_node(void *item);```  | Create a new node (struct) for a binary tree |
| [btree_deletefd.c](https://github.com/JacobPolloreno/42LIBFT/tree/master/srcs/btree_deletefd.c) | ```void btree_deletefd(t_btree **node);```  | Delete a btree node that has **t_file** set as item, using ```delete_file()``` |
| [btree_insert_node.c](https://github.com/JacobPolloreno/42LIBFT/tree/master/srcs/btree_insert_node.c) | ```int btree_insert_node(t_btree **root, void *item, int (*cmpf)(void *, void *));```  | Insert a node into the binary tree using prefix traversal. Return 0 if successful, -1 if error. |
| [btree_level_count.c](https://github.com/JacobPolloreno/42LIBFT/tree/master/srcs/btree_level_count.c) | ```int btree_level_count(t_btree *root);```  | Returns the number of levels a binary tree has |
| [btree_minvalue_node.c](https://github.com/JacobPolloreno/42LIBFT/tree/master/srcs/btree_minvalue_node.c) | ```t_btree *btree_minvalue_node(t_btree **root);```  | Return the node at the bottom left(min value) of the binary tree given a root node |
| [btree_remove_fdnode.c](https://github.com/JacobPolloreno/42LIBFT/tree/master/srcs/btree_remove_fdnode.c) | ```t_btree *btree_remove_fdnode(t_btree **root, void *data_ref);```  | Remove a fd node in the binary tree that matches the data_ref |
| [btree_remove_node.c](https://github.com/JacobPolloreno/42LIBFT/tree/master/srcs/btree_remove_node.c) | ```t_btree *btree_remove_node(t_btree **root, void *data_ref, t_btree_fns *bfns);```  | Remove a node in the binary tree that matches the data_ref |
| [btree_search_item.c](https://github.com/JacobPolloreno/42LIBFT/tree/master/srcs/btree_search_item.c) | ```void *btree_search_item(t_btree *root, void *data_ref, int (*cmpf)(void *, void *));```  | Return the contents of the node that matches the data_ref |
| [btree_update_node.c](https://github.com/JacobPolloreno/42LIBFT/tree/master/srcs/btree_update_node.c) | ```void btree_update_node(t_btree **node, void *new_data, void *(*updatef)(void **, void *));```  | Update a nodes data using an update function that takes the node's current data as well as new data |
| [btree_updatefd.c](https://github.com/JacobPolloreno/42LIBFT/tree/master/srcs/btree_updatefd.c) | ```void	*btree_updatefd(void **data, void *new_data);```  | Update data function for binary tree nodes that use **t_file** structs as content |
| [dequeue.c](https://github.com/JacobPolloreno/42LIBFT/tree/master/srcs/dequeue.c) | ```void *dequeue(t_queue **head, t_queue **tail);```  | Remove node from queue head |
| [enqueue.c](https://github.com/JacobPolloreno/42LIBFT/tree/master/srcs/enqueue.c) | ```int enqueue(t_queue **head, t_queue **tail, void *data);```  | Insert a node at queue tail |
| [fdcmp.c](https://github.com/JacobPolloreno/42LIBFT/tree/master/srcs/fdcmp.c) | ```int fd_cmp(void *fd1, void *fd2);```  | Comparison function for **t_file** structs comparing file descriptor ints |
| [fdsearchcmp.c](https://github.com/JacobPolloreno/42LIBFT/tree/master/srcs/fdsearchcmp.c) | ```int fdsearchcmp(void *data_ref, void *node);```  | Comparison function for **t_file** structs comparing file descriptor ints |
| [ft_atoi.c](https://github.com/JacobPolloreno/42LIBFT/tree/master/srcs/ft_atoi.c) | ```int ft_atoi(const char *str);``` | Converts ASCII string to integer. Reimplementation of standard atoi. |
| [ft_bzero.c](https://github.com/JacobPolloreno/42LIBFT/tree/master/srcs/ft_bzero.c) | ```void ft_bzero(void *s, size_t n);``` | Write zeroes to a byte string. Reimplementation of standard bzero. |
| [ft_createfile.c](https://github.com/JacobPolloreno/42LIBFT/tree/master/srcs/ft_createfile.c) | ```t_file *create_file(int fd);``` | Returns a new malloc'd t_file |
| [ft_deletefile.c](https://github.com/JacobPolloreno/42LIBFT/tree/master/srcs/ft_deletefile.c) | ```void delete_file(t_file **file);``` | Free file and set pointer to null |
| [ft_getstrupper.c](https://github.com/JacobPolloreno/42LIBFT/tree/master/srcs/ft_getstrupper.c) | ```char *ft_getstrupper(char *s);``` | Return new string with all upper case characters |
| [ft_isalnum.c](https://github.com/JacobPolloreno/42LIBFT/tree/master/srcs/ft_isalnum.c) | ```int ft_isalnum(int c);``` | Return alphanumeric character test. Reimplementation of isalnum |
| [ft_isalpha.c](https://github.com/JacobPolloreno/42LIBFT/tree/master/srcs/ft_isalpha.c) | ```int ft_isalpha(int c);``` | Return alphabetic character test. Reimplementation of isalpha |
| [ft_isascii.c](https://github.com/JacobPolloreno/42LIBFT/tree/master/srcs/ft_isascii.c) | ```int ft_isascii(int c);``` | Return ASCII character test. Reimplementation of isascii |
| [ft_isdigit.c](https://github.com/JacobPolloreno/42LIBFT/tree/master/srcs/ft_isdigit.c) | ```int ft_isdigit(int c);``` | Return decimal-digit character test. Reimplementation of isdigit |
| [ft_isprint.c](https://github.com/JacobPolloreno/42LIBFT/tree/master/srcs/ft_isprint.c) | ```int ft_isprint(int c);``` | Return printing character test. Reimplementation of isprint |
| [ft_issort.c](https://github.com/JacobPolloreno/42LIBFT/tree/master/srcs/ft_issort.c) | ```int ft_issort(int *tab, int length, int (*f)(int, int));``` | Test if integer array is sorted |
| [ft_itoa.c](https://github.com/JacobPolloreno/42LIBFT/tree/master/srcs/ft_itoa.c) | ```char *ft_itoa(int n);``` | Convert ASCII decimal-digit string to integer|
| [ft_lstadd.c](https://github.com/JacobPolloreno/42LIBFT/tree/master/srcs/ft_lstadd.c) | ```void ft_lstadd(t_list **alst, t_list *new);``` | Append new t_list node at front of list |
| [ft_lstdel.c](https://github.com/JacobPolloreno/42LIBFT/tree/master/srcs/ft_lstdel.c) | ```void ft_lstdel(t_list **alst, void (*del)(void *, size_t));``` | Remove and free the linked list and it's members|
| [ft_lstdelone.c](https://github.com/JacobPolloreno/42LIBFT/tree/master/srcs/ft_lstdelone.c) | ```void ft_lstdelone(t_list **alst, void (*del)(void *, size_t));``` | Remove and free the t_list node |
| [ft_lstfilter.c](https://github.com/JacobPolloreno/42LIBFT/tree/master/srcs/ft_lstfilter.c) | ```void ft_lstfilter(t_list *lst, int compare, int (*f)(void *, size_t, int));``` | Return new linked list with elements filtered out |
| [ft_lstiter.c](https://github.com/JacobPolloreno/42LIBFT/tree/master/srcs/ft_lstiter.c) | ```void ft_lstfilter(t_list *lst, void (*f)(t_list *elem));``` | Apply function to each element of linked list. |
| [ft_lstmap.c](https://github.com/JacobPolloreno/42LIBFT/tree/master/srcs/ft_lstmap.c) | ```t_list *ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem));``` | Return new linked list with function applied to each element of linked list. |
| [ft_lstnew.c](https://github.com/JacobPolloreno/42LIBFT/tree/master/srcs/ft_lstnew.c) | ```t_list *ft_lstnew(const void *content, size_t content_size));``` | Return new linked list element with content set to param content |
| [ft_memalloc.c](https://github.com/JacobPolloreno/42LIBFT/tree/master/srcs/ft_memalloc.c) | ```void *ft_memalloc(size_t size);``` | Allocates memory with malloc then zeroes out the memory allocated. |
| [ft_memccpy.c](https://github.com/JacobPolloreno/42LIBFT/tree/master/srcs/ft_memccpy.c) | ```void *ft_memccpy(void *dst, const void *src, int c, size_t n);``` | Copy string until character found. Reimplementation of memccpy |
| [ft_memchr.c](https://github.com/JacobPolloreno/42LIBFT/tree/master/srcs/ft_memchr.c) | ```void *ft_memchr(const void *s, int c, size_t n);``` | Locate byte in byte string. Reimplementation of memchr |
| [ft_memcmp.c](https://github.com/JacobPolloreno/42LIBFT/tree/master/srcs/ft_memcmp.c) | ```int ft_memcmp(const void *s1, const void *s2, size_t n);``` | Compare byte string. Reimplementation of memcmp. |
| [ft_memcpy.c](https://github.com/JacobPolloreno/42LIBFT/tree/master/srcs/ft_memcpy.c) | ```void *ft_memcpy(void *dst, const void *src, size_t n);``` | Copy memory area. Reimplementation of memcpy. |
| [ft_memdel.c](https://github.com/JacobPolloreno/42LIBFT/tree/master/srcs/ft_memdel.c) | ```void ft_memdel(void **ap);``` | Free memory at pointer and set to null |
| [ft_memmove.c](https://github.com/JacobPolloreno/42LIBFT/tree/master/srcs/ft_memmove.c) | ```void *ft_memmove(void *dst, const void *src, size_t len);``` | Copy byte string. Reimplementation of memmove. |
| [ft_memset.c](https://github.com/JacobPolloreno/42LIBFT/tree/master/srcs/ft_memset.c) | ```void *ft_memset(void *b, int c, size_t n);``` | Fill a byte string with a byte value. Reimplementation of memset. |
| [ft_putchar.c](https://github.com/JacobPolloreno/42LIBFT/tree/master/srcs/ft_putchar.c) | ```void ft_putchar(char ch);``` |  Write a character to standard output |
| [ft_putchar_fd.c](https://github.com/JacobPolloreno/42LIBFT/tree/master/srcs/ft_putchar_fd.c) | ```void ft_putchar(char ch);``` |  Write a character to file descriptor |
| [ft_putendl.c](https://github.com/JacobPolloreno/42LIBFT/tree/master/srcs/ft_putendl.c) | ```void ft_putendl(const char *s);``` |  Put a string with newline to stdout |
| [ft_putendl_fd.c](https://github.com/JacobPolloreno/42LIBFT/tree/master/srcs/ft_putendl_fd.c) | ```void ft_putendl_fd(const char *s);``` |  Put a string with newline to file descriptor |
| [ft_putnbr.c](https://github.com/JacobPolloreno/42LIBFT/tree/master/srcs/ft_putnbr.c) | ```void ft_putnbr(int n);``` | Write number to standard output |
| [ft_putnbr_fd.c](https://github.com/JacobPolloreno/42LIBFT/tree/master/srcs/ft_putnbr_fd.c) | ```void ft_putnbr_fd(int n, int fd);``` | Write number to file descriptor |
| [ft_putstr.c](https://github.com/JacobPolloreno/42LIBFT/tree/master/srcs/ft_putstr.c) | ```void ft_putstr(const char *s);``` |  Write a string to standard output |
| [ft_putstr_fd.c](https://github.com/JacobPolloreno/42LIBFT/tree/master/srcs/ft_putstr_fd.c) | ```void ft_putstr_fd(const char *s, int fd);``` |  Write a string to file descriptor |
| [ft_putstrs.c](https://github.com/JacobPolloreno/42LIBFT/tree/master/srcs/ft_putstrs.c) | ```void ft_putstrs(const char **strs);``` |  Write strings(string array) to standard output |
| [ft_putstrs_fd.c](https://github.com/JacobPolloreno/42LIBFT/tree/master/srcs/ft_putstrs_fd.c) | ```void ft_putstrs_fd(const char **strs, int fd);``` |  Write strings to file descriptor |
| [ft_sort_wordtab.c](https://github.com/JacobPolloreno/42LIBFT/tree/master/srcs/ft_sort_wordtab.c) | ```void ft_sort_wordtab(char **tab);``` |  Lexicographically sort (with quicksort) word array |
| [ft_strcat.c](https://github.com/JacobPolloreno/42LIBFT/tree/master/srcs/ft_strcat.c) | ```char *ft_strcat(char *dst, const char *src);``` |  Concatenate strings. Reimplementation of strcat. |
| [ft_strcat.c](https://github.com/JacobPolloreno/42LIBFT/tree/master/srcs/ft_strcat.c) | ```char *ft_strcat(char *dst, const char *src);``` |  Concatenate strings. Reimplementation of strcat. |
| [ft_strchr.c](https://github.com/JacobPolloreno/42LIBFT/tree/master/srcs/ft_strchr.c) | ```char *ft_strchr(const char *s, int c);``` |  Locate character in string. Reimplementation of strchr. |
| [ft_strclr.c](https://github.com/JacobPolloreno/42LIBFT/tree/master/srcs/ft_strclr.c) | ```void ft_strclr(char *s);``` |  Clear string by zero-ing memory of string |
| [ft_strchr.c](https://github.com/JacobPolloreno/42LIBFT/tree/master/srcs/ft_strchr.c) | ```char *ft_strchr(const char *s, int c);``` |  Locate character in string. Reimplementation of strchr. |
| [ft_strcmp.c](https://github.com/JacobPolloreno/42LIBFT/tree/master/srcs/ft_strcmp.c) | ```int ft_strcmp(const char *s1, const char *s2);``` |  Compare strings. Reimplementation of strcmp. |
| [ft_strcpy.c](https://github.com/JacobPolloreno/42LIBFT/tree/master/srcs/ft_strcpy.c) | ```char *ft_strcpy(char *dst, const char *src);``` |  Copy strings. Reimplementation of strcpy. |
| [ft_strcre.c](https://github.com/JacobPolloreno/42LIBFT/tree/master/srcs/ft_strcre.c) | ```void ft_strcre(char *str, char ch1, char ch2);``` |  Replace character in string |
| [ft_strdel.c](https://github.com/JacobPolloreno/42LIBFT/tree/master/srcs/ft_strdel.c) | ```void ft_strdel(char **as);``` |  Free string and set to NULL |
| [ft_strdup.c](https://github.com/JacobPolloreno/42LIBFT/tree/master/srcs/ft_strdup.c) | ```char *ft_strdup(const char *src);``` |  Save a copy of a string. Reimplementation of strdup. |
| [ft_strendswith.c](https://github.com/JacobPolloreno/42LIBFT/tree/master/srcs/ft_strendswith.c) | ```int ft_strendswith(const void *suffix, const void *s);``` |  Test if the string ends with the suffix |
| [ft_strequ.c](https://github.com/JacobPolloreno/42LIBFT/tree/master/srcs/ft_strequ.c) | ```int ft_strequ(const char *s1, const char *s2);``` |  Test if two strings are equal. |
| [ft_strexpand.c](https://github.com/JacobPolloreno/42LIBFT/tree/master/srcs/ft_strexpand.c) | ```int ft_strequ(const char *s1, const char *s2);``` |  Expand malloc'd (realloc) space of string. |
| [ft_striter.c](https://github.com/JacobPolloreno/42LIBFT/tree/master/srcs/ft_striter.c) | ```void ft_striter(char *s, void (*f)(char *));``` |  Apply function to each character in string. |
| [ft_striteri.c](https://github.com/JacobPolloreno/42LIBFT/tree/master/srcs/ft_striteri.c) | ```void ft_striteri(char *s, void (*f)(unsigned int, char *));``` |  Apply function to n characters in string.  |
| [ft_strjoin.c](https://github.com/JacobPolloreno/42LIBFT/tree/master/srcs/ft_strjoin.c) | ```char *ft_strjoin(const char *prefix, const char *suffix);``` |  Allocates and returns a fresh null-terminated concat string of prefix and suffix. |
| [ft_strlcat.c](https://github.com/JacobPolloreno/42LIBFT/tree/master/srcs/ft_strlcat.c) | ```size_t ft_strlcat(char *dst, const char *src, size_t dstsize);``` |  Size-bounded string concatenation. Reimplementation of strlcat. |
| [ft_strlen.c](https://github.com/JacobPolloreno/42LIBFT/tree/master/srcs/ft_strlen.c) | ```size_t ft ft_strlen(const char *str);``` |  Find length of string. Reimplementation of strcat. |
| [ft_strmap.c](https://github.com/JacobPolloreno/42LIBFT/tree/master/srcs/ft_strmap.c) | ```char *ft_strmap(const char *s, char (*f)(char));``` |  Apply function to each character in string and return new string|
| [ft_strmapi.c](https://github.com/JacobPolloreno/42LIBFT/tree/master/srcs/ft_strmapi.c) | ```char *ft_strmapi(const char *s, char (*f)(unsigned int, char));``` |  Apply function to n characters in string and return new string |
| [ft_strncat.c](https://github.com/JacobPolloreno/42LIBFT/tree/master/srcs/ft_strncat.c) | ```char *ft_strncat(char *dst, const char *src, size_t n);``` |  Concatenate strings. Append not mroe than n characters. Reimplementation of strncat. |
| [ft_strncmp.c](https://github.com/JacobPolloreno/42LIBFT/tree/master/srcs/ft_strncmp.c) | ```int ft_strncmp(const char *s1, const char *s2);``` |  Lexicographically compare strings (not more than n characters compared). Reimplementation of strncmp. |
| [ft_strncpy.c](https://github.com/JacobPolloreno/42LIBFT/tree/master/srcs/ft_strncpy.c) | ```char *ft_strncpy(char *dst, const char *src, size_t n);``` |  Copy strings. Copy at most len characters from src into dst. Reimplementation of strcnpy. || [ft_strnequ.c](https://github.com/JacobPolloreno/42LIBFT/tree/master/srcs/ft_strnequ.c) | ```int ft_strnequ(const char *s1, const char *s2, size_t n);``` |  Test if two strings are equal.  Test at most n characters. |
| [ft_strnew.c](https://github.com/JacobPolloreno/42LIBFT/tree/master/srcs/ft_strnew.c) | ```char *ft_strnew(size_t size);``` |  Allocate and return "fresh" string |
| [ft_strnstr.c](https://github.com/JacobPolloreno/42LIBFT/tree/master/srcs/ft_strnstr.c) | ```char *ft_strnstr(const char *haystack, const char *needle, size_t len);``` |  Locate a substring in a string. Not more than len characters are searched. Reimplemenation of strnstr. |
| [ft_strrchr.c](https://github.com/JacobPolloreno/42LIBFT/tree/master/srcs/ft_strrchr.c) | ```char *ft_strrchr(const char *s, int c);``` | Locate character in string. Reimplementation of strrchr |
| [ft_strrev.c](https://github.com/JacobPolloreno/42LIBFT/tree/master/srcs/ft_strrev.c) | ```void ft_strrev(char *s);``` |  Reverse a string. |
| [ft_strsplit.c](https://github.com/JacobPolloreno/42LIBFT/tree/master/srcs/ft_strsplit.c) | ```char **ft_strsplit(const char *str, char c);``` | Return list of strings. Split string at seperator character(c) |
| [ft_strstartswith.c](https://github.com/JacobPolloreno/42LIBFT/tree/master/srcs/ft_startswith.c) | ```int ft_strstartswith(const void *prefix, const void *s);``` |  Test if the string starts with the prefix |
| [ft_strstr.c](https://github.com/JacobPolloreno/42LIBFT/tree/master/srcs/ft_strstr.c) | ```char *ft_strstr(const char *haystack, const char *needle);``` |  Locate a substring in a string. Reimplementation of strstr. |
| [ft_strsub.c](https://github.com/JacobPolloreno/42LIBFT/tree/master/srcs/ft_strsub.c) | ```char *ft_strsub(const char *s, unsigned int start, size_t len);``` |  Return a substring beginning from start index. Behavior is undefined if start+len is not a substring. |
| [ft_strswapcase.c](https://github.com/JacobPolloreno/42LIBFT/tree/master/srcs/ft_strswapcase.c) | ```char *ft_strswapcase(const char *s);``` |  Swap case for characters in string. |
| [ft_strtrim.c](https://github.com/JacobPolloreno/42LIBFT/tree/master/srcs/ft_strtrim.c) | ```char *ft_strtrim(const char *s);``` | Remove leading and trailing newline, tab, and space characters. |
| [ft_tolower.c](https://github.com/JacobPolloreno/42LIBFT/tree/master/srcs/ft_tolower.c) | ```int ft_tolower(int c);``` | Convert character to lower case |
| [ft_toupper.c](https://github.com/JacobPolloreno/42LIBFT/tree/master/srcs/ft_toupper.c) | ```int ft_toupper(int c);``` | Convert character to upper case |
| [get_next_line.c](https://github.com/JacobPolloreno/42LIBFT/tree/master/srcs/get_next_line.c) | ```int get_next_line(const int fd, char **line);``` | Return next line in fd. Handles multiple file descriptors |
| [queue_isempty.c](https://github.com/JacobPolloreno/42LIBFT/tree/master/srcs/queue_isempty.c) | ```int queue_isempty(t_queue **head);``` | Test if queue is empty |
| [queue_iter.c](https://github.com/JacobPolloreno/42LIBFT/tree/master/srcs/queue_iter.c) | ```void queue_iter(t_queue **current, void (*applyf)(void *data));``` | Apply function to each element of the queue |
| [queue_print.c](https://github.com/JacobPolloreno/42LIBFT/tree/master/srcs/queue_print.c) | ```void queue_print(t_queue **current, void (*displayf)(void *data));``` | Print queue |
| [stack_isempty.c](https://github.com/JacobPolloreno/42LIBFT/tree/master/srcs/stack_isempty.c) | ```int stack_isempty(t_stack **top);``` | Test if stack is empty |
| [stack_iter.c](https://github.com/JacobPolloreno/42LIBFT/tree/master/srcs/stack_iter.c) | ```void stack_iter(t_stack **current, void (*applyf)(void *data));``` | Apply function to each element of the stack |
| [stack_pop.c](https://github.com/JacobPolloreno/42LIBFT/tree/master/srcs/stack_pop.c) | ```void *stack_pop(t_stack **top);``` | Remove a node from the top |
| [stack_print.c](https://github.com/JacobPolloreno/42LIBFT/tree/master/srcs/stack_print.c) | ```void stack_print(t_stack **current, void (*displayf)(void *data));``` | Print stack |
| [stack_push.c](https://github.com/JacobPolloreno/42LIBFT/tree/master/srcs/stack_push.c) | ```void stack_push(t_stack **top, void *data);``` | Insert a node at the top |
