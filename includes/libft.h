/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpollore <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/21 08:53:00 by jpollore          #+#    #+#             */
/*   Updated: 2018/03/20 17:22:19 by jpollore         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H
# include <string.h>
# include <stdlib.h>
# include <unistd.h>
# define MAX(x, y)	(((x) >= (y)) ? (x) : (y))
# define MIN(x, y)	(((x) < (y)) ? (x) : (y))

typedef struct s_list	t_list;
typedef struct s_dlist	t_dlist;
typedef struct s_bnode	t_btree;
struct		s_list
{
	void	*content;
	size_t	content_size;
	t_list	*next;
};
struct		s_dlist
{
	void	*content;
	size_t	content_size;
	t_dlist	*next;
	t_dlist	*prev;
};
struct		s_bnode
{
	t_btree	*left;
	void	*item;
	t_btree	*right;
};
size_t		ft_strlcat(char *dst, const char *src, size_t dstsize);
size_t		ft_strlen(const char *str);
void		ft_lstadd(t_list **alst, t_list *new_node);
void		ft_lstdel(t_list **alst, void (*del)(void *, size_t));
void		ft_lstdelone(t_list **alst, void (*del)(void *, size_t));
void		ft_lstiter(t_list *lst, void (*f)(t_list *elem));
void		*ft_memalloc(size_t size);
void		*ft_memchr(const void *s, int c, size_t n);
void		*ft_memcpy(void *dst, const void *src, size_t n);
void		*ft_memccpy(void *dst, const void *src, int c, size_t n);
void		*ft_memmove(void *dst, const void *src, size_t len);
void		*ft_memset(void *b, int c, size_t n);
void		ft_bzero(void *s, size_t n);
void		ft_memdel(void **ap);
void		ft_putchar(char ch);
void		ft_putchar_fd(char ch, int fd);
void		ft_putstr(const char *s);
void		ft_putstr_fd(const char *s, int fd);
void		ft_putendl(const char *s);
void		ft_putendl_fd(const char *s, int fd);
void		ft_putnbr(int n);
void		ft_putnbr_fd(int n, int fd);
void		ft_sort_wordtab(char **tab);
void		ft_strdel(char **as);
void		ft_strclr(char *s);
void		ft_striter(char *s, void (*f)(char *));
void		ft_striteri(char *s, void (*f)(unsigned int, char *));
void		ft_strrev(char *s1);
void		ft_strcre(char *str, char ch1, char ch2);
void		ft_putstrs(const char **strs);
void		ft_putstrs_fd(const char **strs, int fd);
void		btree_apply_prefix(t_btree *root, void (*applyf)(void *));
void		btree_apply_infix(t_btree *root, void (*applyf)(void *));
void		btree_apply_suffix(t_btree *root, void (*applyf)(void *));
void		*btree_search_item(t_btree *root, void *data_ref,
				int (*cmpf)(void *, void *));
void		btree_insert_node(t_btree **root, void *item,
				int (*cmpf)(void *, void*));
void		btree_update_node(t_btree **node, void *new_data,
				void *(*updatef)(void **, void *));
char		*ft_getstrupper(char *s);
char		*ft_itoa(int n);
char		*ft_strcat(char *dst, const char *src);
char		*ft_strncat(char *dst, const char *src, size_t n);
char		*ft_strcpy(char *dst, const char *src);
char		*ft_strncpy(char *dst, const char *src, size_t n);
char		*ft_strdup(const char *s1);
char		*ft_strchr(const char *s, int c);
char		*ft_strrchr(const char *s, int c);
char		*ft_strstr(const char *haystack, const char *needle);
char		*ft_strnstr(const char *haystack, const char *needle, size_t len);
char		*ft_strnew(size_t size);
char		*ft_strmap(const char *s, char (*f)(char));
char		*ft_strmapi(const char *s, char (*f)(unsigned int, char));
char		*ft_strsub(const char *s, unsigned int start, size_t len);
char		*ft_strjoin(const char *prefix, const char *suffix);
char		*ft_strtrim(const char *s);
char		*ft_strswapcase(const char *s);
char		**ft_strsplit(const char *str, char c);
int			ft_atoi(const char *str);
int			ft_isalpha(int c);
int			ft_isdigit(int c);
int			ft_isalnum(int c);
int			ft_isascii(int c);
int			ft_isprint(int c);
int			ft_memcmp(const void *s1, const void *s2, size_t n);
int			ft_strendswith(const void *suffix, const void *s);
int			ft_strstartswith(const void *prefix, const void *s);
int			ft_strequ(const char *s1, const char *s2);
int			ft_strnequ(const char *s1, const char *s2, size_t n);
int			ft_strcmp(const char *s1, const char *s2);
int			ft_strncmp(const char *s1, const char *s2, size_t n);
int			ft_tolower(int c);
int			ft_toupper(int c);
int			ft_issort(int *tab, int length, int (*f)(int, int));
int			btree_level_count(t_btree *root);
t_list		*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem));
t_list		*ft_lstnew(const void *content, size_t content_size);
t_btree		*btree_create_node(void *item);
t_btree		*btree_minvalue_node(t_btree **root);
t_btree		*btree_remove_node(t_btree **root, void *data_ref,
				int (*cmpf)(void *, void*), void (*delf)(t_btree **),
				void *(*updatef)(void **, void *));
#endif
