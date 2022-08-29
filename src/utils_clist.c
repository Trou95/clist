#include "clist.h"

void	list_add(t_list *list, int item)
{
	void	*tmp;
	size_t	i;

	if (list == NULL)
		return ;
	if (list->length >= list->size)
	{
		tmp = ft_ccalloc((list->size + CLIST_RESIZE), list->type_size);
		if (tmp == NULL)
			return ;
		i = 0;
		while (i < (list->length * list->type_size))
		{
			ft_cmemcpy((char *)tmp + i, (char *)list->arr + i, list->type_size);
			i += list->type_size;
		}
		ft_cmemcpy((char *)tmp + (list->length * list->type_size), \
		&item, list->type_size);
		list->arr = ft_cfree(tmp, list->arr);
		list->size += CLIST_RESIZE;
	}
	else
		ft_cmemcpy((char *)list->arr + (list->length * list->type_size), \
		&item, list->type_size);
	list->length++;
}

void	list_addptr(t_list *list, void *item)
{
	void	*tmp;
	size_t	i;

	if (list == NULL)
		return ;
	if (list->length >= list->size)
	{
		tmp = ft_ccalloc(list->size + CLIST_RESIZE, list->type_size);
		if (tmp == NULL)
			return ;
		i = 0;
		while (i < (list->length * list->type_size))
		{
			ft_cmemcpy((char *)tmp + i, (char *)list->arr + i, list->type_size);
			i += list->type_size;
		}
		ft_cmemcpy((char *)tmp + (list->length * list->type_size), \
		item, list->type_size);
		list->arr = ft_cfree(tmp, list->arr);
		list->size += CLIST_RESIZE;
	}
	else
		ft_cmemcpy((char *)list->arr + (list->length * list->type_size), \
		item, list->type_size);
	list->length++;
}

void	list_remove_at(t_list *list, size_t index)
{
	void	*tmp;
	size_t	i;

	if (list == NULL || index > list->length)
		return ;
	tmp = ft_ccalloc(list->size, list->type_size);
	if (tmp == NULL)
		return ;
	i = 0;
	while (i < (index * list->type_size))
	{
		ft_cmemcpy((char *)tmp + i, (char *)list->arr + i, list->type_size);
		i += list->type_size;
	}
	index++;
	while (index < list->length)
	{
		ft_cmemcpy((char *)tmp + i, \
		(char *)list->arr + (index * list->type_size), list->type_size);
		i += list->type_size;
		index++;
	}
	list->length--;
	free(list->arr);
	list->arr = tmp;
}

int	list_find(t_list *list, int item)
{
	size_t	i;

	if (list == NULL)
		return (-1);
	i = 0;
	while (i < (list->length * list->type_size))
	{
		if (ft_cmemcmp((char *)list->arr + i, &item, list->type_size) == 1)
			return (i / list->type_size);
		i += list->type_size;
	}
	return (-1);
}
