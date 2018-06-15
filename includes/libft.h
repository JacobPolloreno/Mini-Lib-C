/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpollore <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/21 08:53:00 by jpollore          #+#    #+#             */
/*   Updated: 2018/06/15 08:38:56 by jpollore         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H
# include <string.h>
# include <stdlib.h>
# include <unistd.h>
# define MAX(x, y)	(((x) >= (y)) ? (x) : (y))
# define MIN(x, y)	(((x) < (y)) ? (x) : (y))
# define BUFF_SIZE 1024
# define STDIN_FILENO 0
# define STDOUT_FILENO 1
# define STDERR_FILENO 2
# define ANSI_COLOR_RED     "\x1b[31m"
# define ANSI_COLOR_GREEN   "\x1b[32m"
# define ANSI_COLOR_YELLOW  "\x1b[33m"
# define ANSI_COLOR_BLUE    "\x1b[34m"
# define ANSI_COLOR_MAGENTA "\x1b[35m"
# define ANSI_COLOR_CYAN    "\x1b[36m"
# define ANSI_COLOR_RESET   "\x1b[0m"
# include "ft_printf.h"

typedef struct s_list	t_list;
typedef struct s_dlist	t_dlist;
typedef struct s_bnode	t_btree;
typedef struct s_file	t_file;
typedef	struct s_btree_fns	t_btree_fns;
typedef	struct s_stack	t_stack;
typedef	struct s_queue	t_queue;
typedef	struct s_tuple	t_tuple;
typedef wchar_t*	t_wstr;
struct			s_list
{
	void		*content;
	size_t		content_size;
	t_list		*next;
};
struct			s_dlist
{
	void		*content;
	size_t		content_size;
	t_dlist		*next;
	t_dlist		*prev;
};
struct			s_bnode
{
	t_btree		*left;
	void		*item;
	t_btree		*right;
};
struct			s_file
{
	char		*content;
	int			fd;
};
struct			s_btree_fns
{
	int			(*cmpf)(void *, void*);
	void		(*delf)(t_btree **);
	void		*(*updatef)(void **, void *);
};
struct			s_stack
{
	void		*data;
	t_stack		*next;
};
struct			s_queue
{
	void		*data;
	t_queue		*next;
};
struct			s_tuple
{
	int		x;
	int		y;
};
size_t			ft_strlcat(char *dst, const char *src, size_t dstsize);
size_t			ft_strlen(const char *str);
size_t			ft_wstrlen(const wchar_t *str);
void			ft_lstadd(t_list **alst, t_list *new_node);
void			ft_lstdel(t_list **alst, void (*del)(void *, size_t));
void			ft_lstdelone(t_list **alst, void (*del)(void *, size_t));
void			ft_lstiter(t_list *lst, void (*f)(t_list *elem));
void			ft_bzero(void *s, size_t n);
void			ft_memdel(void **ap);
void			ft_putchar(char ch);
void			ft_putchar_fd(char ch, int fd);
void			ft_putstr(const char *s);
void			ft_putstr_fd(const char *s, int fd);
void			ft_putendl(const char *s);
void			ft_putendl_fd(const char *s, int fd);
void			ft_putnbr(int n);
void			ft_putnbr_fd(int n, int fd);
void			ft_putwchar(const wchar_t ch);
void			ft_putwchar_fd(const wchar_t ch, int fd);
void			ft_putwstr(const wchar_t *s);
void			ft_putwstr_fd(const wchar_t *s, int fd);
void			ft_printbits(int nb);
void			ft_printbits_fd(int nb, int fd);
void			ft_sort_wordtab(char **tab);
void			ft_strdel(char **as);
void			ft_strsdel(char ***as);
void			ft_strclr(char *s);
void			ft_striter(char *s, void (*f)(char *));
void			ft_striteri(char *s, void (*f)(unsigned int, char *));
void			ft_strrev(char *s1);
void			ft_strcre(char *str, char ch1, char ch2);
void			ft_putstrs(const char **strs);
void			ft_putstrs_fd(const char **strs, int fd);
void			ft_strtoupper(char *str);
void			ft_strtolower(char *str);
void			ft_wstrdel(wchar_t **as);
void			btree_apply_prefix(t_btree *root, void (*applyf)(void *));
void			btree_apply_infix(t_btree *root, void (*applyf)(void *));
void			btree_apply_suffix(t_btree *root, void (*applyf)(void *));
void			btree_update_node(t_btree **node, void *new_data,
					void *(*updatef)(void **, void *));
void			btree_deletefd(t_btree **node);
void			delete_file(t_file **file);
void			stack_print(t_stack **current, void (*displayf)(void *));
void			stack_iter(t_stack **current, void (*applf)(void *));
void			queue_print(t_queue *current, void (*displayf)(void *));
void			queue_iter(t_queue *current, void (*applyf)(void *));
void			*ft_memalloc(size_t size);
void			*ft_memchr(const void *s, int c, size_t n);
void			*ft_memcpy(void *dst, const void *src, size_t n);
void			*ft_memccpy(void *dst, const void *src, int c, size_t n);
void			*ft_memmove(void *dst, const void *src, size_t len);
void			*ft_memset(void *b, int c, size_t n);
void			*stack_pop(t_stack **top);
void			*btree_updatefd(void **data, void *new_data);
void			*btree_search_item(t_btree *root, void *data_ref,
					int (*cmpf)(void *, void *));
void			*dequeue(t_queue **head, t_queue **tail);
void			ft_arriter(void *arr, size_t len, size_t data_size,
					void (*f)(void *));
void			ft_iarriter(int *arr, size_t len, void (*f)(int));
void			ft_tarriter(t_tuple *arr, size_t len, void (*f)(t_tuple));
char			*ft_getstrupper(char *s);
char			*ft_itoa(int n);
char			*ft_itoa_base(int n, int base);
char			*ft_ltoa_base(long n, int base);
char			*ft_uitoa(unsigned long n);
char			*ft_uitoa_base(unsigned long n, int base);
char			*ft_ultoa_base(unsigned long long n, int base);
char			*ft_strcat(char *dst, const char *src);
char			*ft_strncat(char *dst, const char *src, size_t n);
char			*ft_strcpy(char *dst, const char *src);
char			*ft_strncpy(char *dst, const char *src, size_t n);
char			*ft_strdup(const char *s1);
char			*ft_strchr(const char *s, int c);
char			*ft_strchri(const char *s, int c, unsigned int start);
char			*ft_strrchr(const char *s, int c);
char			*ft_strstr(const char *haystack, const char *needle);
char			*ft_strnstr(const char *haystack, const char *needle,
					size_t len);
char			*ft_strnew(size_t size);
char			*ft_strmap(const char *s, char (*f)(char));
char			*ft_strmapi(const char *s, char (*f)(unsigned int, char));
char			*ft_strsub(const char *s, unsigned int start, size_t len);
char			*ft_strsubdel(char **s, unsigned int start, size_t len);
char			*ft_strjoin(const char *prefix, const char *suffix);
char			*ft_strjoindel(char **prefix, char **suffix);
char			*ft_strtrim(const char *s);
char			*ft_strswapcase(const char *s);
char			**ft_strsplit(const char *str, char c);
char			*ft_strexpand(char *str, size_t expand_by);
char			*ft_getwchar(const wchar_t ch);
char			*ft_wstr_to_str(const wchar_t *wstr);
int				ft_atoi(const char *str);
int				ft_isalpha(int c);
int				ft_isdigit(int c);
int				ft_isalnum(int c);
int				ft_isascii(int c);
int				ft_isprint(int c);
int				ft_memcmp(const void *s1, const void *s2, size_t n);
int				ft_strendswith(const void *suffix, const void *s);
int				ft_strstartswith(const void *prefix, const void *s);
int				ft_strequ(const char *s1, const char *s2);
int				ft_strnequ(const char *s1, const char *s2, size_t n);
int				ft_strcmp(const char *s1, const char *s2);
int				ft_strncmp(const char *s1, const char *s2, size_t n);
int				ft_tolower(int c);
int				ft_toupper(int c);
int				ft_issort(int *tab, int length, int (*f)(int, int));
int				btree_level_count(t_btree *root);
int				fd_cmp(void *fd1, void *fd2);
int				fdsearchcmp(void *data_ref, void *node);
int				btree_insert_node(t_btree **root, void *item,
					int (*cmpf)(void *, void*));
int				get_next_line(const int fd, char **line);
int				stack_isempty(t_stack **top);
int				stack_push(t_stack **top, void *data);
int				enqueue(t_queue **head, t_queue **tail, void *data);
int				queue_isempty(t_queue **head);
int				ft_powi(int num, int pow);
int				*ft_iarrmap(int *arr, size_t len, int (*f)(int));
int				*ft_iarrappend(int *arr, size_t len, int data);
int				ft_ituplecmp(t_tuple t1, t_tuple t2);
int				ft_tarrhas(t_tuple *arr, size_t len, t_tuple data,
					int (*f)(t_tuple, t_tuple));
int				arrargcmp(void *arr, size_t len, size_t data_size,
					int (*f)(void *, void *));
int			ft_iarrhas(int *arr, size_t len, int data);
int				ft_floorsqrt(int x);
double			ft_powd(double num, double pow);
long			ft_powl(long num, long pow);
unsigned long	ft_powul(unsigned long num, unsigned long pow);
t_list			*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem));
t_list			*ft_lstnew(const void *content, size_t content_size);
t_btree			*btree_create_node(void *item);
t_btree			*btree_minvalue_node(t_btree **root);
t_btree			*btree_remove_node(t_btree **root, void *data_ref,
					t_btree_fns *bfns);
t_btree			*btree_remove_fdnode(t_btree **root, void *data_ref);
t_file			*create_file(int fd);
t_tuple			ft_ituple(int nb1, int nb2);
t_tuple			*ft_tarrmap(t_tuple *arr, size_t len,
					t_tuple (*f)(t_tuple));
t_tuple			*ft_tarrappend(t_tuple **arr, size_t len, t_tuple data);
void			ft_tarrappendin(t_tuple **arr, size_t len, t_tuple data);
wchar_t			*ft_wstrnew(size_t size);
wchar_t			*ft_wstrdup(const wchar_t *src);
#endif
