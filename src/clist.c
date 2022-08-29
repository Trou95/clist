#include "clist.h"

t_list	*list_create(unsigned int type_size)
{
	t_list	*list;

	list = ft_ccalloc(1, sizeof(t_list));
	if (list == NULL)
		return (NULL);
	list->arr = ft_ccalloc(CLIST_SIZE, type_size);
	if (list->arr == NULL)
	{
		free(list);
		return (NULL);
	}
	list->length = 0;
	list->size = CLIST_SIZE;
	list->type_size = type_size;
	return (list);
}

void	*list_item_at(t_list *list, size_t index)
{
	if (list == NULL || index > list->length)
		return (NULL);
	return ((char *)list->arr + (index * list->type_size));
}

void	list_destroy(t_list *list)
{
	if (list == NULL)
		return ;
	if (list->arr)
		free(list->arr);
	free(list);
}

void	list_print(t_list *list)
{
	size_t	i;

	if (list == NULL)
		return ;
	if (list->type_size != sizeof(char))
		return ;
	i = 0;
	while (i < list->length)
	{
		i++;
	}
}
