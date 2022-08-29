#ifndef CLIST_H
# define CLIST_H

# include <stdio.h>
# include <stdlib.h>

# define CLIST_SIZE 2
# define CLIST_RESIZE 5

typedef struct c_list
{
	void			*arr;
	size_t			length;
	size_t			size;
	unsigned int	type_size;
}				t_list;

t_list	*list_create(unsigned int type_size);
void	list_destroy(t_list *list);
void	list_print(t_list *list);
void	list_add(t_list *list, int item);
void	list_addptr(t_list *list, void *ptr);
void	list_remove_at(t_list *list, size_t index);
void	*list_item_at(t_list *list, size_t index);
int		list_find(t_list *list, int item);

void	list_addf(t_list *list, float item);
int		list_findf(t_list *list, float item);

void	*ft_cmemcpy(void *dst, const void *src, size_t n);
void	*ft_ccalloc(size_t count, size_t size);
int		ft_cmemcmp(const void *dst, const void	*src, size_t n);
void	*ft_cfree(void *dst, void *src);

#endif 
