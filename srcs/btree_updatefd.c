#include "libft.h"

void	*btree_updatefd(void **data, void *new_data)
{
	t_file	*new_file;
	t_file	*update_file;

	delete_file((t_file **)data);
	update_file = (t_file *)(new_data);
	new_file = create_file(update_file->fd);
	if (update_file->content)
		new_file->content = ft_strdup(update_file->content);
	return (new_file);
}
