#include "libft.h"

void	btree_deletefd(t_btree **node)
{
	if (!node)
		return ;
	delete_file((*node)->item);
	free(*node);
	*node = NULL;
}
