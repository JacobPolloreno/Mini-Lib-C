# Libft

## Description
This project contains many reimplementations of standard C functions created by Jacob Polloreno. For
learning purposes.

## Getting Started
* Note: tested on Mac OS High Sierra
1. `git clone https://github.com/JacobPolloreno/42LIBFT.git libft`
2. `cd libft`
3. run `make` to compile the library and produce a `libft.a` file
4. to make use of the library run `gcc -L. -lft your_c_file.c` while in the `libft/` directory
	* you can move the `libft.a` file into your project repo **but** you must also copy over the `libft.h` header file
	* if you decide to move the library, run `gcc -L<path_to_library> -lft your_c_file.c`
5. Makefile commands:
	* `re`, `clean`, `fclean`, `all`, `make_test`, `clean_test`, and `run_test`

### To Run Unit Test
1. `brew install check` to install the testing framework
2. you may need to change the paths found in the Makefile under `TEST_HEADER` and `TEST_LIBRARY` to
   point the check file
3. `make run_test` will compile the test file in `tests/libft.check` and run the test

* Note: the test framework takes advantage of the `checkmk` awk script to generate the check .c file
* Note 2: Unit test are not comprehensive but provide a stepping stone for test driven development

# Implementations

## Data Structures Supported
 - Linked list (look for _ft\_ls-_ prefix in file names. Both single and double linked list supported.
 - Binary tree (look for _btree-_ prefix in file names.
 
## Functions Implemented
| Name | Prototype | Description |
| --- | --- | --- |
| [btree_apply_infix.c](https://github.com/JacobPolloreno/42LIBFT/srcs/btree_apply_infix.c) | ```void btree_apply_infix(t_btree *root, void (*applyf)(void *);``` | Apply function to binary tree nodes using infix traversal (go left; apply; go right) |
| [btree_apply_prefix.c](https://github.com/JacobPolloreno/42LIBFT/srcs/btree_apply_prefix.c) | ```void btree_apply_prefix(t_btree *root, void (*applyf)(v:oid *);```| Apply function to binary tree nodes using prefix traversal (apply; go left; go right) |
| [btree_apply_suffix.c](https://github.com/JacobPolloreno/42LIBFT/srcs/btree_apply_suffix.c) | ```void btree_apply_suffix(t_btree *root, void (*applyf)(void *);```| Apply function to binary tree nodes using suffix traversal (go left; go right; apply) |
| [btree_create_node.c](https://github.com/JacobPolloreno/42LIBFT/srcs/btree_create_node.c) | ```t_btree *btree_create_node(void *item);```  | Create a new node (struct) for a binary tree |
| [btree_deletefd.c](https://github.com/JacobPolloreno/42LIBFT/srcs/btree_deletefd.c) | ```void btree_deletefd(t_btree **node);```  | Delete a btree node that has **t_file** set as item, using ```delete_file()``` |
| [btree_insert_node.c](https://github.com/JacobPolloreno/42LIBFT/srcs/btree_insert_node.c) | ```void btree_insert_node(t_btree **root, void *item, int (*cmpf)(void *, void *));```  | Insert a node into the binary tree using prefix traversal |
| [btree_level_count.c](https://github.com/JacobPolloreno/42LIBFT/srcs/btree_level_count.c) | ```int btree_level_count(t_btree *root);```  | Returns the number of levels a binary tree has |
| [btree_minvalue_node.c](https://github.com/JacobPolloreno/42LIBFT/srcs/btree_minvalue_node.c) | ```t_btree *btree_minvalue_node(t_btree **root);```  | Return the node at the bottom left(min value) of the binary tree given a root node |
| [btree_remove_fdnode.c](https://github.com/JacobPolloreno/42LIBFT/srcs/btree_remove_fdnode.c) | ```t_btree *btree_remove_fdnode(t_btree **root, void *data_ref);```  | Remove the node in the binary tree that matches the data_ref |
| [btree_search_item.c](https://github.com/JacobPolloreno/42LIBFT/srcs/btree_search_item.c) | ```void *btree_search_item(t_btree *root, void *data_ref, int (*cmpf)(void *, void *));```  | Return the contents of the node that matches the data_ref |
| [btree_update_node.c](https://github.com/JacobPolloreno/42LIBFT/srcs/btree_update_node.c) | ```void btree_update_node(t_btree **node, void *new_data, void *(*updatef)(void **, void *));```  | Update a nodes data using an update function that takes the node's current data as well as new data |
| [btree_updatefd.c](https://github.com/JacobPolloreno/42LIBFT/srcs/btree_updatefd.c) | ```void	*btree_updatefd(void **data, void *new_data);```  | Update data function for binary tree nodes that use **t_file** structs as content |
| [fdcmp.c](https://github.com/JacobPolloreno/42LIBFT/srcs/fdcmp.c) | ```int fd_cmp(void *fd1, void *fd2);```  | Comparison function for **t_file** structs comparing file descriptor ints |
| [fdsearchcmp.c](https://github.com/JacobPolloreno/42LIBFT/srcs/fdsearchcmp.c) | ```int fdsearchcmp(void *data_ref, void *node);```  | Comparison function for **t_file** structs comparing file descriptor ints |
| [ft_atoi.c](https://github.com/JacobPolloreno/42LIBFT/srcs/ft_atoi.c) | ```int ft_atoi(const char *str);``` | Converts ASCII string to integer. Reimplementation of standard atoi. |
| [ft_bzero.c](https://github.com/JacobPolloreno/42LIBFT/srcs/ft_bzero.c) | ```void ft_bzero(void *s, size_t n);``` | Write zeroes to a byte string. Reimplementation of standard bzero. |
| [ft_createfile.c](https://github.com/JacobPolloreno/42LIBFT/srcs/ft_createfile.c) | ```t_file *create_file(int fd);``` | Returns a new malloc'd t_file |
| [ft_deletefile.c](https://github.com/JacobPolloreno/42LIBFT/srcs/ft_deletefile.c) | ```void delete_file(t_file **file);``` | Free file and set pointer to null |
| [ft_getstrupper.c](https://github.com/JacobPolloreno/42LIBFT/srcs/ft_getstrupper.c) | ```char *ft_getstrupper(char *s);``` | Return new string with all upper case characters |
| [ft_isalnum.c](https://github.com/JacobPolloreno/42LIBFT/srcs/ft_isalnum.c) | ```int ft_isalnum(int c);``` | Return alphanumeric character test. Reimplementation of isalnum |
| [ft_isalpha.c](https://github.com/JacobPolloreno/42LIBFT/srcs/ft_isalpha.c) | ```int ft_isalpha(int c);``` | Return alphabetic character test. Reimplementation of isalpha |
| [ft_isascii.c](https://github.com/JacobPolloreno/42LIBFT/srcs/ft_isascii.c) | ```int ft_isascii(int c);``` | Return ASCII character test. Reimplementation of isascii |
| [ft_isdigit.c](https://github.com/JacobPolloreno/42LIBFT/srcs/ft_isdigit.c) | ```int ft_isdigit(int c);``` | Return decimal-digit character test. Reimplementation of isdigit |
| [ft_isprint.c](https://github.com/JacobPolloreno/42LIBFT/srcs/ft_isprint.c) | ```int ft_isprint(int c);``` | Return printing character test. Reimplementation of isprint |
| [ft_issort.c](https://github.com/JacobPolloreno/42LIBFT/srcs/ft_issort.c) | ```int ft_issort(int *tab, int length, int (*f)(int, int));``` | Test if integer array is sorted |
| [ft_itoa.c](https://github.com/JacobPolloreno/42LIBFT/srcs/ft_itoa.c) | ```char *ft_itoa(int n);``` | Convert ASCII decimal-digit string to integer|
| [ft_lstadd.c](https://github.com/JacobPolloreno/42LIBFT/srcs/ft_lstadd.c) | ```void ft_lstadd(t_list **alst, t_list *new);``` | Append new t_list node at front of list |
| [ft_lstdel.c](https://github.com/JacobPolloreno/42LIBFT/srcs/ft_lstdel.c) | ```void ft_lstdel(t_list **alst, void (*del)(void *, size_t));``` | Remove and free the linked list and it's members|
| [ft_lstdelone.c](https://github.com/JacobPolloreno/42LIBFT/srcs/ft_lstdelone.c) | ```void ft_lstdelone(t_list **alst, void (*del)(void *, size_t));``` | Remove and free the t_list node |
| [ft_lstfilter.c](https://github.com/JacobPolloreno/42LIBFT/srcs/ft_lstfilter.c) | ```void ft_lstfilter(t_list *lst, int compare, int (*f)(void *, size_t, int));``` | Return new linked list with elements filtered out |
| [ft_lstiter.c](https://github.com/JacobPolloreno/42LIBFT/srcs/ft_lstiter.c) | ```void ft_lstfilter(t_list *lst, void (*f)(t_list *elem));``` | Apply function to each element of linked list. |
| [ft_lstmap.c](https://github.com/JacobPolloreno/42LIBFT/srcs/ft_lstmap.c) | ```t_list *ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem));``` | Return new linked list with function applied to each element of linked list. |
| [ft_lstnew.c](https://github.com/JacobPolloreno/42LIBFT/srcs/ft_lstnew.c) | ```t_list *ft_lstnew(const void *content, size_t content_size));``` | Return new linked list element with content set to param content |
| [ft_memalloc.c](https://github.com/JacobPolloreno/42LIBFT/srcs/ft_memalloc.c) | ```void *ft_memalloc(size_t size);``` | Allocates memory with malloc then zeroes out the memory allocated. |
| [ft_memccpy.c](https://github.com/JacobPolloreno/42LIBFT/srcs/ft_memccpy.c) | ```void *ft_memccpy(void *dst, const void *src, int c, size_t n);``` | Copy string until character found. Reimplementation of memccpy |
| [ft_memchr.c](https://github.com/JacobPolloreno/42LIBFT/srcs/ft_memchr.c) | ```void *ft_memchr(const void *s, int c, size_t n);``` | Locate byte in byte string. Reimplementation of memchr |
| [ft_memcmp.c](https://github.com/JacobPolloreno/42LIBFT/srcs/ft_memcmp.c) | ```int ft_memcmp(const void *s1, const void *s2, size_t n);``` | Compare byte string. Reimplementation of memcmp. |
| [ft_memcpy.c](https://github.com/JacobPolloreno/42LIBFT/srcs/ft_memcpy.c) | ```void *ft_memcpy(void *dst, const void *src, size_t n);``` | Copy memory area. Reimplementation of memcpy. |
| [ft_memdel.c](https://github.com/JacobPolloreno/42LIBFT/srcs/ft_memdel.c) | ```void ft_memdel(void **ap);``` | Free memory at pointer and set to null |
| [ft_memmove.c](https://github.com/JacobPolloreno/42LIBFT/srcs/ft_memmove.c) | ```void *ft_memmove(void *dst, const void *src, size_t len);``` | Copy byte string. Reimplementation of memmove. |
| [ft_memset.c](https://github.com/JacobPolloreno/42LIBFT/srcs/ft_memset.c) | ```void *ft_memset(void *b, int c, size_t n);``` | Fill a byte string with a byte value. Reimplementation of memset. |
| [ft_putchar.c](https://github.com/JacobPolloreno/42LIBFT/srcs/ft_putchar.c) | ```void ft_putchar(char ch);``` |  Write a character to standard output |
| [ft_putchar_fd.c](https://github.com/JacobPolloreno/42LIBFT/srcs/ft_putchar_fd.c) | ```void ft_putchar(char ch);``` |  Write a character to file descriptor |
| [ft_putendl.c](https://github.com/JacobPolloreno/42LIBFT/srcs/ft_putendl.c) | ```void ft_putendl(const char *s);``` |  Put a string with newline to stdout |
| [ft_putendl_fd.c](https://github.com/JacobPolloreno/42LIBFT/srcs/ft_putendl_fd.c) | ```void ft_putendl_fd(const char *s);``` |  Put a string with newline to file descriptor |