/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpollore <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/13 14:59:00 by jpollore          #+#    #+#             */
/*   Updated: 2018/03/23 17:59:24 by jpollore         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	int	chk_prv(char **prv, char **line)
{
	char	*nl_ptr;
	char	*strnew;
	size_t	prv_size;
	size_t	trim_cnt;

	if ((nl_ptr = ft_strchr(*prv, '\n')))
	{
		trim_cnt = nl_ptr - *prv;
		strnew = NULL;
		if (!(*line = ft_strsub(*prv, 0, trim_cnt)))
			return (0);
		prv_size = ft_strlen(*prv);
		if (prv_size - trim_cnt > 1 &&
			!(strnew = ft_strsub(*prv, trim_cnt + 1, prv_size - trim_cnt)))
		{
			free(*line);
			return (0);
		}
		free(*prv);
		*prv = strnew;
		return (1);
	}
	return (0);
}

static	int	found_line(char **prv, char **line, char **buf, int ret)
{
	char	*nl_ptr;
	size_t	prv_size;
	size_t	nl_idx;

	if (!(nl_ptr = ft_strchr(*buf, '\n')))
	{
		*prv = ft_strexpand(*prv, BUFF_SIZE + 1);
		ft_strcat(*prv, *buf);
		ft_bzero(*buf, BUFF_SIZE);
		return (0);
	}
	nl_idx = nl_ptr - *buf;
	prv_size = *prv ? ft_strlen(*prv) : 0;
	if (!(*line = ft_strnew(prv_size + nl_idx)))
		return (-1);
	if (*prv && ft_strncpy(*line, *prv, prv_size))
		ft_strdel(prv);
	ft_memccpy((void *)&(*line)[prv_size], (void *)(*buf), '\n', nl_idx);
	if (ret - nl_idx > 1)
		*prv = ft_strsub(*buf, nl_idx + 1, ret - nl_idx);
	ft_strdel(buf);
	return (ret);
}

static	int	read_next_line(const int fd, char **line, char **prv)
{
	int		ret;
	char	*buf;

	if (!(buf = ft_strnew(BUFF_SIZE)))
		return (-1);
	while ((ret = read(fd, buf, BUFF_SIZE)) > 0)
	{
		if (found_line(prv, line, &buf, ret))
			return (1);
	}
	ft_strdel(&buf);
	return (ret);
}

static	int	chk_eof_before_return(t_btree **root, const int *fd, t_file **node)
{
	char	eof_chck[2];
	int		ret;

	if (!(*node)->content && (ret = read(*fd, eof_chck, 1)) != 1)
	{
		(*root) = btree_remove_fdnode(root, (void *)fd);
		free(*node);
		*node = NULL;
	}
	else if (!(*node)->content && ret)
	{
		eof_chck[1] = '\0';
		(*node)->content = ft_strdup(eof_chck);
		ft_bzero(eof_chck, 2);
	}
	return (1);
}

int			get_next_line(const int fd, char **line)
{
	static t_btree	*root;
	t_file			*node;
	int				ret;

	if (fd < 0 || !line || read(fd, NULL, 0) == -1)
		return (-1);
	while (!(node = btree_search_item(root, (void *)&fd, &fdsearchcmp)))
	{
		if (!(node = create_file(fd)) ||
			btree_insert_node(&root, (void *)node, &fd_cmp))
			return (-1);
	}
	if (node->content && chk_prv(&(node->content), line) && line)
		return (chk_eof_before_return(&root, &fd, &node));
	else if ((ret = read_next_line(fd, line, &(node->content)) > 0))
		return (chk_eof_before_return(&root, &fd, &node));
	else if (node->content && (*line = ft_strdup(node->content)))
	{
		ft_strdel(&(node->content));
		return (chk_eof_before_return(&root, &fd, &node));
	}
	return (0);
}
